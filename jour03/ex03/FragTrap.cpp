#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 100;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->meleeAttackDamage = 30;
  this->rangeAttackDamage = 20;
  this->arrmorDamageReduction = 5;
  std::cout << "In the void constructeur" << std::endl;
  return;
}

FragTrap::FragTrap(std::string name) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 100;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->name = name;
  this->meleeAttackDamage = 30;
  this->rangeAttackDamage = 20;
  this->arrmorDamageReduction = 5;
  std::cout << "In the constructeur" << std::endl;
  return;
}


FragTrap::FragTrap(FragTrap const &src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

FragTrap &FragTrap::operator=(FragTrap const & src) {
  std::cout << "In the = operator" << std::endl;
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

FragTrap::~FragTrap(void) {
  std::cout << "In the Destructeur" << std::endl;
  return;
}
unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target) {
  unsigned int nbr = std::rand() % 5;
  std::string names[] = {"super attacks", "nice attacks","bof acttack","gun shot","good like attack"};
  if (this->energyPoints - 25 < 0) {
    std::cout << "ERREUR messing energyPoints" << '\n';
    return 0;
  }
      this->energyPoints -= 25;
      std::cout << "FR4G-TP <" << this->name << "> use "<< names[nbr] << " on <"<< target << "> at range, causing <" << 5 *nbr << ">points of damage!" << std::endl;
  return 5 *nbr;
}

unsigned int FragTrap::rangedAttack(std::string const &target) {
    std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << "> at range, causing <" << this->rangeAttackDamage << ">points of damage!" << std::endl;
  return this->rangeAttackDamage;
}

unsigned int FragTrap::meleeAttack(std::string const &target) {
    std::cout << "FR4G-TP <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->meleeAttackDamage << ">points of damage!" << std::endl;
  return this->meleeAttackDamage;
}
