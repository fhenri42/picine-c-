#include <time.h>
#include <ncurses.h>
#include "Player.class.hpp"
#include "GameEntity.hpp"
#include "AmmoController.class.hpp"
#include "EnnemyController.hpp"
#include "GameController.hpp"


int main()
{
	int ch;

	initscr();			/* Start curses mode 		*/
	raw();				/* Line buffering disabled	*/
	keypad(stdscr, TRUE);		/* We get F1, F2 etc..		*/
	noecho();			/* Don't echo() while we do getch */
	curs_set(0); // hide cursor
	notimeout(stdscr, TRUE);
	scrollok(stdscr, FALSE);
	time_t start;
	time_t end;
	Vector2 pos(COLS / 2 - 3, LINES - 3);
	Vector2 titlePos(COLS / 2 - 15, 20);
	Player p1(1, "Player1", 'a', 'd', ' ',
	        "img/player.img", pos);
	std::srand(0);
	AmmoController ammoController;
	EnnemyController ennemyContoller;
	GameController gameController(&ammoController,&ennemyContoller, &p1);
	p1.setEnnemyController(&ennemyContoller);
	p1.setAmmoController(&ammoController);
	GameEntity title("img/titre.img", titlePos);
	title.show();
	refresh();
	ch = getch();
	nodelay(stdscr, TRUE);
	while(true)
	{
		time(&start);
		if (start % 2 == 0) {
			Vector2 posE(COLS - std::rand()% 200, 10);
			Iennemy *oneEnnemy = new Iennemy("img/enemi.img",posE);
			ennemyContoller.addEnnemy(oneEnnemy);
		}
		clear();
		ammoController.mooveAmmo();
		ennemyContoller.mooveEnnemy();
		gameController._checkEnnemyAmmoCollision();
		gameController._checkEnnemyCollision();
		p1.show();
		gameController.displayRes();
		ch = getch();
		if (ch == 410) { break; }
		if (ch == 27)
		{
			endwin();
			return (0);
		}
		p1.move(ch);
		refresh();
		time(&end);
		timeout(80 - (end - start));
	}
	getch();
	endwin();
	return 0;
}
