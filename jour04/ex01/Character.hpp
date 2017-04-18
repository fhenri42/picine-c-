# ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:
  Character(void);
  Character(std::string const &name);     //Constructeur par defaut
  Character(Character const &src); // Copy
  virtual ~Character(void);                // Destructeur de recopie
  Character &operator=(Character const & src);  // operator d'affecationt

  void recoverAP();
  void equip(AWeapon* aweapon);
  void attack(Enemy* enemy);
  int getAp() const;
  AWeapon *getAWeapon() const;
  virtual std::string getName() const;
protected:
  int AP;
  AWeapon *equipWeapon;
  std::string name;
};

std::ostream &operator<<(std::ostream& os,const Character & character);

#endif
