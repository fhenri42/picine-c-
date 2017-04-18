#include <iostream>
#include "ZombieEvent.hpp"

int main () {
  ZombieEvent test;
  for (int i= 0; i < 10; i++) {
  Zombie *random = test.ZombieEvent::randomChump();
  delete random;
}
char buff[515];
while (1) {
  std::cout << "your Zombie name : ";
  std::cin >> buff;
  Zombie *perso = test.ZombieEvent::newZombie(buff);
  delete perso;
}
  return 0;

}
