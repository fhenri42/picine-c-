#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(void) {

  this->name = "ak47";
  this->apcost = 10;
  this->damage = 10;
  std::cout << "You just find a " << name << std::endl;
  return;
}
AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), damage(damage), apcost(apcost) {
  std::cout << "In the constructeur" << name << std::endl;
  return;
}

AWeapon::AWeapon(AWeapon const &src): name(src.name), damage(src.damage), apcost(src.apcost) {
  std::cout << "Copy of constructeur called " << name << std::endl;
  return;
}


AWeapon &AWeapon::operator=(AWeapon const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  this->damage = src.damage;
  this->apcost = src.apcost;
  return *this;
}

AWeapon::~AWeapon(void) {
  std::cout << name << " just broke" << std::endl;
  return;
}

std::string AWeapon::getName() const {
  return this->name;
}

int AWeapon::getAPCost() const {
  return this->apcost;
}

int AWeapon::getDamage() const {
  return this->damage;
}

void AWeapon::attack() const  {
  std::cout << "TATATATATAT!!!!" << std::endl;
}
