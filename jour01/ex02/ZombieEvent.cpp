#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent() {
  std::cout << "In the ZombieEvent" << std::endl;
  return;
}

ZombieEvent::~ZombieEvent(void) {
  std::cout << "Delete" << std::endl;
  return;
}
void ZombieEvent::setZombieType(std::string type) {
  this->type = type;
}

Zombie* ZombieEvent::randomChump() {

  std::string names[] = {"henri", "bruno","whaiba","hugo"};
  int nbr = std::rand() % 4;
  Zombie *monster = new Zombie();
  ZombieEvent::setZombieType("Monster");
  monster->Zombie::getName(names[nbr]);
  monster->Zombie::getType(this->type);
  monster->Zombie::announce();
  return monster;
}

Zombie* ZombieEvent::newZombie(std::string name) {

  Zombie *monster = new Zombie();
  ZombieEvent::setZombieType("Monster");
  monster->Zombie::getName(name);
  monster->Zombie::getType(this->type);
  monster->Zombie::announce();
  return monster;
}
