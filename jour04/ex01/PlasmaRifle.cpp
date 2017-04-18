#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon(" Plasma Rifle", 8, 50) {
  std::cout << "You just find a Plasma Rifle "<< std::endl;
  return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  this->damage = src.damage;
  this->apcost = src.apcost;
  return *this;
}

PlasmaRifle::~PlasmaRifle(void) {
  std::cout << name << " just broke" << std::endl;
  return;
}


 void PlasmaRifle::attack() const {
  std::cout <<"* pschhh... SBAM! *" << std::endl;
}
