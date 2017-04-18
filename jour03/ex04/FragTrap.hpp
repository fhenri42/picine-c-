# ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);     //Constructeur par defaut
    FragTrap(FragTrap const &src); // Copy
    ~FragTrap(void);                // Destructeur de recopie
    FragTrap &operator=(FragTrap const & src);  // operator d'affecationt

    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    unsigned int vaulthunter_dot_exe(std::string const & target);
};

#endif
