#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->meleeAttackDamage = 20;
  this->rangeAttackDamage = 15;
  this->arrmorDamageReduction = 3;
  std::cout << "In the void constructeur NIJA" << std::endl;
  return;
}

NinjaTrap::NinjaTrap(std::string name) {
  this->hitPoint = 100;
  this->maxHitPoints = 100;
  this->energyPoints = 50;
  this->maxEnergyPoints = 100;
  this->level = 1;
  this->name = name;
  this->meleeAttackDamage = 20;
  this->rangeAttackDamage = 15;
  this->arrmorDamageReduction = 3;
  std::cout << "In the constructeur NIJA" << std::endl;
  return;
}


NinjaTrap::NinjaTrap(NinjaTrap const &src) {
  *this = src;
  std::cout << "Copy of constructeur called NIJA" << std::endl;
  return;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const & src) {
  std::cout << "In the = operator NIJA" << std::endl;
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

NinjaTrap::~NinjaTrap(void) {
  std::cout << "In the Destructeur NIJA" << std::endl;
  return;
}
void NinjaTrap::ninjaShoebox(ClapTrap const &supNIJA) {
  std::cout << "\033[1;36mhello " << supNIJA.name << ": i AM THE NIJA!!!!!!!!!!!!!!!! (ClapTrap)\033[0m" << std::endl;
  return;
}
void NinjaTrap::ninjaShoebox(FragTrap const &supNIJA) {
  std::cout << "\033[1;36mhello " << supNIJA.name << ": i AM THE NIJA!!!!!!!!!!!!!!! (FragTrap) \033[0m" << std::endl;
  return;
}
void NinjaTrap::ninjaShoebox(ScavTrap const &supNIJA) {
  std::cout << "\033[1;36mhello " << supNIJA.name << ": i AM THE NIJA!!!!!!!!!!!!!! (ScavTrap) \033[0m" << std::endl;
  return;
}
void NinjaTrap::ninjaShoebox(NinjaTrap const &supNIJA) {
  std::cout << "\033[1;36mhello " << supNIJA.name << ": i AM THE NIJA!!!!!!!!!!!!! (NinjaTrap) \033[0m" << std::endl;
  return;
}

unsigned int NinjaTrap::rangedAttack(std::string const &target) {
    std::cout << "\033[1;36mFR4G-TP <" << this->name << "> attacks <" << target << "> at range, causing <" << this->rangeAttackDamage << ">points of damage! \033[0m" << std::endl;
  return this->rangeAttackDamage;
}

unsigned int NinjaTrap::meleeAttack(std::string const &target) {
    std::cout << "\033[1;36mFR4G-TP <" << this->name << "> attacks <" << target << "> at melee, causing <" << this->meleeAttackDamage << ">points of damage! \033[0m" << std::endl;
  return this->meleeAttackDamage;
}
