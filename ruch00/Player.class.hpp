# ifndef PLAYER_HPP
# define PLAYER_HPP

#include <iostream>
#include "Vector2.hpp"
#include "GameEntity.hpp"
#include "Ammo.class.hpp"
#include "AmmoController.class.hpp"
#include "EnnemyController.hpp"

class Player : public GameEntity
{
  public:
    Player(void);
    Player(int _hp, std::string _name);     //Constructeur par defaut
    Player(int _hp, std::string _name, char leftInput, char rightInput,
            char shootInput, std::string texture, Vector2 pos);
    Player(Player const &src); // Copy
    ~Player(void);                // Destructeur de recopie
    Player &operator=(Player const & src);  // operator d'affecationt


    int getHp(void) const;
    std::string getName(void) const;
    void move(char const c);
    void setAmmoController(AmmoController *ammoController);
    void setEnnemyController(EnnemyController *EnnemyController);
    static Vector2 right;
    void checKcolition(void);

private:
  int _hp;
  std:: string _name;
  char _leftInput;
  char _rightInput;
  char _shootInput;
  AmmoController *_ammoController;
  EnnemyController *_ennemyController;
  void _shoot(void);
};

std::ostream &operator<<(std::ostream& os,const Player & src);
#endif
