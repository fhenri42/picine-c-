# ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
public:
  AWeapon(void);
  AWeapon(std::string const & name, int apcost, int damage);     //Constructeur par defaut
  AWeapon(AWeapon const &src); // Copy
  virtual ~AWeapon(void);                // Destructeur de recopie
  AWeapon &operator=(AWeapon const & src);  // operator d'affecationt

  virtual std::string getName() const;
  int getAPCost() const;
  int getDamage() const;

  virtual void attack() const = 0;
protected:
  std::string name;
  int damage;
  int apcost;


};
#endif
