# ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
class FragTrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);     //Constructeur par defaut
    FragTrap(FragTrap const &src); // Copy
    ~FragTrap(void);                // Destructeur de recopie
    FragTrap &operator=(FragTrap const & src);  // operator d'affecationt

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
    unsigned int vaulthunter_dot_exe(std::string const & target);
};

#endif
