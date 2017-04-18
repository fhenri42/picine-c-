# ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
  public:
    SuperTrap(void);
    SuperTrap(std::string name);     //Constructeur par defaut
    SuperTrap(SuperTrap const &src); // Copy
    ~SuperTrap(void);                // Destructeur de recopie
    SuperTrap &operator=(SuperTrap const & src);  // operator d'affecationt
};

#endif
