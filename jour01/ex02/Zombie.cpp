#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
  return;
}

Zombie::~Zombie(void) {
  std::cout << "Delete" << std::endl;
  return;
}


void Zombie::getName(std::string name) {
  this->_name = name;
  return;
}

void Zombie::getType(std::string type) {
  this->_type = type;
  return;
}

void Zombie::announce() {
  std::cout << "< "<<this->_name<< " ("<< this->_type <<") >" << "BROOOOOOOOW....."<< std::endl;
  return;
}
