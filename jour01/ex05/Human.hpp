# ifndef HUMAN_H
# define HUMAN_H
#include "Brain.hpp"
class Human
{
  public:
    Human(void);
    ~Human(void);
    Brain _brain;

    std::string identify();
    Brain getBrain();
};

#endif
