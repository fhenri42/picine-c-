# ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"
class ZombieHorde
{
  public:
    ZombieHorde(int N);
    ~ZombieHorde(void);
    void setZombieType(std::string type);
     std::string type;
    Zombie *monster;
};

#endif
