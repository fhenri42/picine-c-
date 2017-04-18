#include <iostream>
#include "Victim.hpp"

Victim::Victim(void) {

  this->name = "Bob";
  std::cout <<"Some random victim called " << name <<" just popped !"<< std::endl;
  return;
}
Victim::Victim(std::string name) {

  this->name = name;
  std::cout <<"Some random victim called " << name <<" just popped !"<< std::endl;
  return;
}

Victim::Victim(Victim const &src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

Victim &Victim::operator=(Victim const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  return *this;
}

Victim::~Victim(void) {
  std::cout <<"Victim " << name <<" just died for no apparent reason !"<< std::endl;
  return;
}

std::string Victim::getName() const {
  return this->name;
}

std::ostream& operator<< (std::ostream& os, const Victim &victim)
{
    os << "I am " << victim.getName() << ", and I like otters !" << std::endl;
    return (os);
}

void Victim::getPolymorphed(void) const {
    std::cout << this->getName() <<" has been turned into a cute little sheep !"<< std::endl;
}
