#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) {
  Pony::name = name;
  std::cout << "In the constructeur" << std::endl;
  return;
}

Pony::~Pony(void) {
  std::cout << "In the destructeur" << std::endl;
return;
}

void Pony::ponyOnTheHeap() {
  Pony* heapOne = new Pony("on the heap");
  std::cout << heapOne->name << std::endl;
  delete heapOne;
}

void Pony::ponyOnTheStack() {
  Pony stackOne = Pony("on the stack");
  std::cout << stackOne.name << std::endl;
}
