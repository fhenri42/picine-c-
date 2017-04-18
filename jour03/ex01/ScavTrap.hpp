# ifndef Scav_TRAP_HPP
# define Scav_TRAP_HPP

#include <iostream>

class ScavTrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);     //Constructeur par defaut
    ScavTrap(ScavTrap const &src); // Copy
    ~ScavTrap(void);                // Destructeur de recopie
    ScavTrap &operator=(ScavTrap const & src);  // operator d'affecationt

    int hitPoint;
    unsigned int maxHitPoints;
    int energyPoints;
    int maxEnergyPoints;
    int level;
    std:: string name;
    int meleeAttackDamage;
    int rangeAttackDamage;
    unsigned int arrmorDamageReduction;
    unsigned int rangedAttack(std::string const &target);
    unsigned int meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const & target);

};

#endif
