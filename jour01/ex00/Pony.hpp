# ifndef PONY_H
# define PONY_H

#include <iostream>
class Pony
{
  public:
    Pony(std::string name);
    ~Pony(void);
    std::string name;
    static void ponyOnTheHeap();
    static void ponyOnTheStack();
};

#endif
