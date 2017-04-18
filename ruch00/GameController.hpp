# ifndef GAMECONTROLLER_HPP
# define GAMECONTROLLER_HPP

#include <string>
#include "GameEntity.hpp"
#include "Vector2.hpp"
#include "EnnemyController.hpp"
#include "AmmoController.class.hpp"
#include "Iennemy.class.hpp"
#include "Player.class.hpp"

class GameController
{
private:

    AmmoController  *_ammoController;
    EnnemyController *_ennemyController;
    Player *_player;



public:
  void _checkEnnemyCollision(void);
  void _checkEnnemyAmmoCollision(void);
  void _checkPlayerAmmoCollision(void);
    GameController(void);
    GameController(AmmoController *ammoController, EnnemyController *ennemyController, Player *player); // Copy
    GameController(GameController const &src);
    ~GameController(void);                // Destructeur de recopie
    void displayRes(void);

    void lostGame(void);
    GameController &operator=(GameController const & src);  // operator d'affecationt
    int ennemyDead;
    int life;
    void CheckAllCollision(void);
};

#endif
