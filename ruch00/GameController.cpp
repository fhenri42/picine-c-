# include "GameController.hpp"

GameController::GameController(void)
{
}

GameController::~GameController(void)
{
}

GameController::GameController(AmmoController *ammoController, EnnemyController *ennemyController, Player *player)
{
    this->_ammoController = ammoController;
    this->_ennemyController = ennemyController;
    this->_player = player;
    this->life = 3;
    this->ennemyDead = 0;
}

GameController::GameController(GameController const &src)
{
    this->life = src.life;
    return;
}

void GameController::_checkEnnemyAmmoCollision(void) {

  struct AmmoList *tmp1 = this->_ammoController->ammoList;
  struct AmmoList *list1 = tmp1;

  while (list1->next != NULL) {
    struct EnnemyList *tmp2 = this->_ennemyController->ennemyList;
    struct EnnemyList *list2 = tmp2;

    while (list1 && list1->ammo && list2 && list2->ennemy && list2->ennemy->transform->isColide(*list1->ammo->transform)) {
      tmp2 = list2->next;
      delete list2->ennemy;
      delete list2;
      this->ennemyDead +=1;
      this->_ennemyController->ennemyList = tmp2;
      list2 = tmp2;
    }

    while (list2  && list2->next != NULL) {

       if (list1 && list1->ammo  && list2->next->ennemy &&(list2->next->ennemy->transform->isColide(*list1->ammo->transform) || list2->next->ennemy->transform->getPos().y < -10)) {
         if (list2->next->ennemy->transform->getPos().y > -10) {this->ennemyDead += 1; }
        struct  EnnemyList *tmpNext = list2->next->next;
        delete list2->next->ennemy;
        delete list2->next;
       list2->next = tmpNext;
      } else {
        list2 = list2->next;
      }

    }
    list2 = tmp2;
    list1 = list1->next;
  }
list1 = tmp1;
}

  void GameController::_checkEnnemyCollision(void) {

      struct EnnemyList *tmp2 = this->_ennemyController->ennemyList;
      struct EnnemyList *list2 = tmp2;

      if (list2 && list2->ennemy && list2->ennemy->transform->isColide(*this->_player->transform)) {
        if (this->life == 0)
        {
            this->lostGame();
        }
        this->life -= 1;
        struct EnnemyList *tmp = list2;
        list2 = list2->next;
        delete tmp->ennemy;
        delete tmp;
      }

      while (list2  && list2->next != NULL) {

         if (list2->next->ennemy && list2->next->ennemy->transform->isColide(*this->_player->transform)) {
           if (this->life == 0){
               this->lostGame();
           }
           this->life -= 1;
           struct EnnemyList *tmp = list2->next->next;
           delete list2->next->ennemy;
           delete list2->next;
           list2->next = tmp;
        } else {
          list2 = list2->next;
        }
      }
      list2 = tmp2;
  }

void GameController::lostGame() {
  char ch;
while (1) {
  clear();
  mvprintw(LINES /2, COLS / 2 - 11,"END OF GAME, PRESS ECS");
  refresh();
  ch = getch();
  if (ch == 27)
  {
    endwin();
    exit(0);
  }
}
}
void GameController::displayRes() {
    int ammoShot = this->_ammoController->getAmmo();
    int score = this->ennemyDead;
    int life = this->life;

      mvprintw(5,5,"Information: ammoShot: %d, Ennemy kiled: %d, You have %d life left ",ammoShot, score, life);
}
GameController &GameController::operator=(GameController const &rhs)
{
  this->life = rhs.life;
    return *this;
}
