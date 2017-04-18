# ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "Aweapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle(void);    //Constructeur par defaut
  PlasmaRifle(PlasmaRifle const &src); // Copy
  virtual ~PlasmaRifle(void);                // Destructeur de recopie
  PlasmaRifle &operator=(PlasmaRifle const & src);  // operator d'affecationt

  void attack() const;

};

#endif
