#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) {

  std::cout << "In the ZombieHorde" << std::endl;
  std::string names[] = {"henri", "bruno","whaiba","hugo"};
  this->monster = new Zombie[N];
  for (int x= 0; x < N; x++) {
    int nbr = std::rand() % 4;
    ZombieHorde::setZombieType("monster");
    monster[x].Zombie::getName(names[nbr]);
    monster[x].Zombie::getType(this->type);
    monster[x].Zombie::announce();
  }
  return;
}

ZombieHorde::~ZombieHorde(void) {
  delete [] this->monster;
  std::cout << "Delete" << std::endl;
  return;
}

void ZombieHorde::setZombieType(std::string type) {
  this->type = type;
}
