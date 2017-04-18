#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human() {
  return;
}

Human::~Human(void) {
  return;
}

std::string Human::identify() {
return this->_brain.Brain::identify();
}

Brain Human::getBrain() {
return this->_brain;
}
