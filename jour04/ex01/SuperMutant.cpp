#include <iostream>
#include "Supermutant.hpp"

Supermutant::Supermutant(void) : Enemy(170, "Super Mutant") {
  std::cout << "Gaaah. Me want smash heads !"<< std::endl;
  return;
}

Supermutant::Supermutant(Supermutant const &src) : Enemy(src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

Supermutant &Supermutant::operator=(Supermutant const & src) {
  std::cout << "In the = operator" << std::endl;
  this->hp = src.hp;
  this->type = src.type;
  return *this;
}

Supermutant::~Supermutant(void) {
  std::cout << "Aaargh..." << std::endl;
  return;
}


void Supermutant::takeDamage(int dmg) {
  if (dmg < 0) { return; }
    dmg -= 3;
    hp -= dmg;
}
