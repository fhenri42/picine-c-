#include <iostream>
#include "Character.hpp"
Character::Character(void) {
  this->name= "Bob";
  this->AP = 40;
  std::cout << "You uconter a Enemy " << std::endl;
  return;
}
Character::Character(std::string const &name) : name(name) {
  this->AP = 40;
  this->equipWeapon = NULL;
  std::cout << "In the constructeur Character" << std::endl;
  return;
}

Character::Character(Character const &src):  name(src.name) {
  std::cout << "Copy of constructeur called  Character" << std::endl;
  return;
}


Character &Character::operator=(Character const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  this->AP = src.AP;

  return *this;
}

Character::~Character(void) {
  std::cout <<"just broke" << std::endl;
  return;
}

void Character::attack (Enemy *enemy) {
  if (this->getAWeapon() == NULL) {
    return;
  }
  if (this->getAWeapon()->getAPCost() > this->getAp()) {
    std::cout << "Errreu AP"<< '\n';
    return;
  }
  enemy->takeDamage(this->getAWeapon()->getDamage());
  if (enemy->getHP() <= 0) {
    std::cout << "You just kield your target"<< '\n';
    //  delete enemy;
    return;
  }
  std::cout << enemy->getType() << "attacks "<< enemy->getType() << "with a " << this->getAWeapon()->getName()<< '\n';
}

void Character::recoverAP() {
  if (this->AP + 10 <= 40) {
    this->AP=40;
    return;
  }
  this->AP += 10;
  return;
}

AWeapon *Character::getAWeapon() const{
  return this->equipWeapon;
}

void Character::equip(AWeapon *aweapon) {
  this->equipWeapon = aweapon;
  return;
}
std::string Character::getName() const {
  return this->name;
}
int Character::getAp() const {
  return this->AP;
}


std::ostream& operator<< (std::ostream& os, const Character &character)
{
  AWeapon *wep = character.getAWeapon();
  if (wep != NULL) {
    os    << character.getName() << " has "<< character.getAp() << " AP and wields a" << wep->getName() << std::endl;
  } else {
    os    << character.getName() << " has "<< character.getAp() << " AP and is unarmed" << std::endl;
  }
  return (os);
}
