#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion") {
  std::cout << "* click click click *”"<< std::endl;
  return;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src) {
  *this = src;
  return;
}

RadScorpion &RadScorpion::operator=(RadScorpion const & src) {
  std::cout << "In the = operator" << std::endl;
  this->type = src.type;
  this->hp = src.hp;
  return *this;
}

RadScorpion::~RadScorpion(void) {
  std::cout << "* SPROTCH *" << std::endl;
  return;
}


void RadScorpion::takeDamage(int dmg)   {
  if (dmg < 0) { return; }
    hp -= dmg;
}
