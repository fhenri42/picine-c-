# ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
class ClapTrap
{
  public:
    ClapTrap(void);
    ClapTrap(std::string name);     //Constructeur par defaut
    ClapTrap(ClapTrap const &src); // Copy
    ~ClapTrap(void);                // Destructeur de recopie
    ClapTrap &operator=(ClapTrap const & src);  // operator d'affecationt

    int hitPoint;
    unsigned int maxHitPoints;
    int energyPoints;
    int maxEnergyPoints;
    int level;
    std:: string name;
    int meleeAttackDamage;
    int rangeAttackDamage;
    unsigned int arrmorDamageReduction;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
