# ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
  public:
    NinjaTrap(void);
    NinjaTrap(std::string name);     //Constructeur par defaut
    NinjaTrap(NinjaTrap const &src); // Copy
    ~NinjaTrap(void);                // Destructeur de recopie
    NinjaTrap &operator=(NinjaTrap const & src);  // operator d'affecationt

    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    void ninjaShoebox(NinjaTrap const &supNIJA);
    void ninjaShoebox(ClapTrap const &supNIJA);
    void ninjaShoebox(FragTrap const &supNIJA);
    void ninjaShoebox(ScavTrap const &supNIJA);
};

#endif
