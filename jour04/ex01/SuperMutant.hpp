# ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <iostream>
#include "Enemy.hpp"

class Supermutant : public Enemy
{
public:
  Supermutant(void);
  Supermutant(int hp, std::string const &type);     //Constructeur par defaut
  Supermutant(Supermutant const &src); // Copy
  virtual ~Supermutant(void);                // Destructeur de recopie
  Supermutant &operator=(Supermutant const & src);  // operator d'affecationt

  void takeDamage(int dmg);
};
#endif
