# ifndef RADSCORPTION_HPP
# define RADSCORPTION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
  RadScorpion(void);
  RadScorpion(int hp, std::string const &type);     //Constructeur par defaut
  RadScorpion(RadScorpion const &src); // Copy
  virtual ~RadScorpion(void);                // Destructeur de recopie
  RadScorpion &operator=(RadScorpion const & src);  // operator d'affecationt

   void takeDamage(int dmg);
};
#endif
