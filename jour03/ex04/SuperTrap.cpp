#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) {
  SuperTrap::hitPoint = FragTrap::hitPoint;
  // this->maxHitPoints = 100;
  // this->energyPoints = 50;
  // this->maxEnergyPoints = 100;
  // this->level = 1;
  // this->meleeAttackDamage = 20;
  // this->rangeAttackDamage = 15;
  // this->arrmorDamageReduction = 3;
  std::cout << "In the void constructeur SUPER" << std::endl;
  return;
}

SuperTrap::SuperTrap(std::string name) {
  this->hitPoint = 8;//FragTrap::hitPoint;
  // this->maxHitPoints = 100;
  // this->energyPoints = 50;
  // this->maxEnergyPoints = 100;
  // this->level = 1;
  // this->name = name;
  // this->meleeAttackDamage = 20;
  // this->rangeAttackDamage = 15;
  // this->arrmorDamageReduction = 3;
  std::cout << "In the constructeur SUPER" << std::endl;
  return;
}


SuperTrap::SuperTrap(SuperTrap const &src) {
  *this = src;
  std::cout << "Copy of constructeur called SUPER" << std::endl;
  return;
}

SuperTrap &SuperTrap::operator=(SuperTrap const & src) {
  std::cout << "In the = operator SUPER" << std::endl;
  // this->hitPoint = src.hitPoint;
  // this->maxHitPoints = src.maxHitPoints;
  // this->energyPoints = src.energyPoints;
  // this->maxEnergyPoints = src.maxEnergyPoints;
  // this->level = src.level;
  // this->name = src.name;
  // this->meleeAttackDamage = src.meleeAttackDamage;
  // this->rangeAttackDamage = src.rangeAttackDamage;
  // this->arrmorDamageReduction = src.arrmorDamageReduction;
  return *this;
}

SuperTrap::~SuperTrap(void) {
  std::cout << "In the Destructeur SUPER" << std::endl;
  return;
}
