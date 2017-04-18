#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain() {
  std::stringstream tmp;
  tmp << this;
  this->addrese = tmp.str();
  return;
}

Brain::~Brain(void) {
  return;
}
std::string Brain::identify() {
return this->addrese;
}
