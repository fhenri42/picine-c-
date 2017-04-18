#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(void) {
  this->type= "monster";
  this->hp = 100;
  std::cout << "You uconter a Ennemy " << std::endl;
  return;
}
Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type) {
  std::cout << "In the constructeur Enemy" << std::endl;
  return;
}

Enemy::Enemy(Enemy const &src):  hp(src.hp), type(src.type) {
  std::cout << "Copy of constructeur called  Enemy" << std::endl;
  return;
}


Enemy &Enemy::operator=(Enemy const & src) {
  std::cout << "In the = operator" << std::endl;
  this->type = src.type;
  this->hp = src.hp;

  return *this;
}

Enemy::~Enemy(void) {
  std::cout <<"just broke" << std::endl;
  return;
}

int Enemy::getHP() const {
  return this->hp;
}

std::string Enemy::getType() const {
  return this->type;
}

void Enemy::takeDamage(int dmg) {
  if (dmg < 0) { return; }
    hp -= dmg;
}
