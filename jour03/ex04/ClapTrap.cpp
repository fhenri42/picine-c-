#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
  this->hitPoint = 0;
  this->maxHitPoints = 0;
  this->energyPoints = 0;
  this->maxEnergyPoints = 0;
  this->level = 0;
  this->meleeAttackDamage = 0;
  this->rangeAttackDamage = 0;
  this->arrmorDamageReduction = 0;
  std::cout << "In the void constructeur Clap" << std::endl;
  return;
}

ClapTrap::ClapTrap(std::string name) {
  this->hitPoint = 0;
  this->maxHitPoints = 0;
  this->energyPoints = 0;
  this->maxEnergyPoints = 0;
  this->level = 0;
  this->name = name;
  this->meleeAttackDamage = 0;
  this->rangeAttackDamage = 0;
  this->arrmorDamageReduction = 0;
  std::cout << "In the constructeur Clap" << std::endl;
  return;
}


ClapTrap::ClapTrap(ClapTrap const &src) {
  *this = src;
  std::cout << "Copy of constructeur called Clap" << std::endl;
  return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & src) {
  std::cout << "In the = operator Clap" << std::endl;
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

ClapTrap::~ClapTrap(void) {
  std::cout << "In the Destructeur Clap" << std::endl;
  return;
}

void ClapTrap::takeDamage(unsigned int amount) {

  if (amount <= this->arrmorDamageReduction) {
    std::cout << "The arrmor absorbe the damage!" << std::endl;
    return;
  }
  amount = amount - this->arrmorDamageReduction;
  this->hitPoint -= amount;
  if (this->hitPoint <= 0) {
    std::cout << "\033[1;32mFR4G-TP is dead :( sorry" << std::endl;
    return;
  }
  std::cout << "\033[1;32mFR4G-TP <" << this->name << "> take <" << amount << "> points of damage! \033[0m" << std::endl;
  return;
}

void ClapTrap::beRepaired(unsigned int amount) {

  if (this->hitPoint <= 0) {
    std::cout << "Is dead you can not repaire it sorry :( "<< std::endl;
    return;
  }
  if (this->hitPoint + amount >= this->maxHitPoints) {
    this->hitPoint = this->maxHitPoints;
    std::cout << "\033[1;32mFR4G-TP <" << this->name <<"> is as fully repaire GG \033[0m "<< std::endl;
  } else {
    this->hitPoint = this->hitPoint + amount;
    std::cout << "\033[1;32mFR4G-TP <"<< this->name <<"> repaire for <" << amount << "> points of life! \033[0m" << std::endl;
  }
  return;
}
