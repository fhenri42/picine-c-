# ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "Aweapon.hpp"

class PowerFist : public AWeapon
{
public:
  PowerFist(void);    //Constructeur par defaut
  PowerFist(PowerFist const &src); // Copy
  virtual ~PowerFist(void);                // Destructeur de recopie
  PowerFist &operator=(PowerFist const & src);  // operator d'affecationt

  void attack() const;

};
#endif
