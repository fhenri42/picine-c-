#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {

  this->name = "Bob";
  this->title = "Madge";
  std::cout << name << ", " << title << ", is born !" << std::endl;
  return;
}

Sorcerer::Sorcerer(std::string name, std::string title) {

  this->name = name;
  this->title = title;
  std::cout << name << ", " << title << ", is born !" << std::endl;
  return;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
  *this = src;
  std::cout << "Copy of constructeur called" << std::endl;
  return;
}

Sorcerer &Sorcerer::operator=(Sorcerer const & src) {
  std::cout << "In the = operator" << std::endl;
  this->name = src.name;
  this->title = src.title;
  return *this;
}

Sorcerer::~Sorcerer(void) {
  std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl;
  return;
}
std::string Sorcerer::getName() const {
  return this->name;
}
std::string Sorcerer::getTitle() const {
  return this->title;
}
void Sorcerer::polymorph(Victim const & victim) const {
  victim.getPolymorphed();
}
std::ostream& operator<< (std::ostream& os, const Sorcerer &sorcerer)
{
    os    << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
    return (os);
}
