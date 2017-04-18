# ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

#include <iostream>
#include "Zombie.hpp"
class ZombieEvent
{
  public:
    ZombieEvent();
    ~ZombieEvent(void);
     void setZombieType(std::string type);
     Zombie *newZombie(std::string name);
     Zombie *randomChump();
     std::string type;
};

#endif
