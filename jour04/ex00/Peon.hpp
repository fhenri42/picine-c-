# ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
  public:
    Peon(std::string name);     //Constructeur par defaut
    Peon(Peon const &src); // Copy
    ~Peon(void);                // Destructeur de recopie
    Peon &operator=(Peon const & src);  // operator d'affecationt
    void getPolymorphed(void) const;
    Peon(void);
};

#endif
