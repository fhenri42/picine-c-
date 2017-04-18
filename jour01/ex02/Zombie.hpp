# ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
class Zombie
{
  public:
    Zombie(void);
    ~Zombie(void);
    std::string _name;
    std::string _type;
    void announce();
    void getName(std::string name);
    void getType(std::string type);

};

#endif
