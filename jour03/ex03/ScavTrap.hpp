# ifndef Scav_TRAP_HPP
# define Scav_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);     //Constructeur par defaut
    ScavTrap(ScavTrap const &src); // Copy
    ~ScavTrap(void);                // Destructeur de recopie
    ScavTrap &operator=(ScavTrap const & src);  // operator d'affecationt

    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    void challengeNewcomer(std::string const & target);

};

#endif
