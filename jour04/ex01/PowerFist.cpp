#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("PowerFist", 5, 21) {
  std::cout << "You just find a PowerFist" << std::endl;
  return;
}

PowerFist::PowerFist(PowerFist const &src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

PowerFist &PowerFist::operator=(PowerFist const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  this->damage = src.damage;
  this->apcost = src.apcost;
  return *this;
}

PowerFist::~PowerFist(void) {
  std::cout << name << " just broke" << std::endl;
  return;
}


 void PowerFist::attack() const {
  std::cout <<"* piouuu piouuu piouuu *" << std::endl;
}
