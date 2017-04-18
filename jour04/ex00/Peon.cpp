#include <iostream>
#include "Peon.hpp"

Peon::Peon(void) : Victim("peonname") {
  std::cout <<"Zog zog." << std::endl;
  return;
}

Peon::Peon(std::string name) : Victim(name) {
  std::cout <<"Zog zog."<< std::endl;
  return;
}

Peon::Peon(Peon const &src) : Victim(src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

Peon &Peon::operator=(Peon const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  return *this;
}

Peon::~Peon(void) {
  std::cout <<"Bleurak..."  <<std::endl;
  return;
}

void Peon::getPolymorphed(void) const {
    std::cout << this->getName() <<" has been turned into a cute little sheep !"<< std::endl;
}
