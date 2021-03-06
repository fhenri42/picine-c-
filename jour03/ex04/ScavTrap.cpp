#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->meleeAttackDamage = 20;
  this->rangeAttackDamage = 15;
  this->arrmorDamageReduction = 3;
  std::cout << "In the void constructeur SCAV" << std::endl;
  return;
}

ScavTrap::ScavTrap(std::string name) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->name = name;
  this->meleeAttackDamage = 20;
  this->rangeAttackDamage = 15;
  this->arrmorDamageReduction = 3;
  std::cout << "In the constructeur SCAV" << std::endl;
  return;
}


ScavTrap::ScavTrap(ScavTrap const &src) {
  *this = src;
  std::cout << "Copy of constructeur called SCAV" << std::endl;
  return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & src) {
  std::cout << "In the = operator SCAV" << std::endl;
  this->hitPoint = src.hitPoint;
  this->maxHitPoints = src.maxHitPoints;
  this->energyPoints = src.energyPoints;
  this->maxEnergyPoints = src.maxEnergyPoints;
  this->level = src.level;
  this->name = src.name;
  this->meleeAttackDamage = src.meleeAttackDamage;
  this->rangeAttackDamage = src.rangeAttackDamage;
  this->arrmorDamageReduction = src.arrmorDamageReduction;
  return *this;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "In the Destructeur SCAV" << std::endl;
  return;
}
void ScavTrap::challengeNewcomer(std::string const & target) {
  unsigned int nbr = std::rand() % 4;
  std::string names[] = {"> can you touch your nose with your tongue ", "> can you immite a monkey ","> could you be a vegan? if yes prove it. ","> could you say the alphabet backwards "};
  std::cout << "\033[1;31mFR4G-TP <" << this->name << names[nbr]<< target <<"\033[0m" << std::endl;
  return;
}

unsigned int ScavTrap::rangedAttack(std::string const &target) {
    std::cout << "\033[1;31mFR4G-TP <" << this->name << "> attacks <" << target << "> at range, causing <" << this->rangeAttackDamage << ">points of damage! \033[0m" << std::endl;
  return this->rangeAttackDamage;
}

unsigned int ScavTrap::meleeAttack(std::string const &target) {
    std::cout << "\033[1;31mFR4G-TP <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->meleeAttackDamage << ">points of damage! \033[0m" << std::endl;
  return this->meleeAttackDamage;
}
