# ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
public:
  Enemy(void);
  Enemy(int hp, std::string const &type);     //Constructeur par defaut
  Enemy(Enemy const &src); // Copy
  virtual ~Enemy(void);                // Destructeur de recopie
  Enemy &operator=(Enemy const & src);  // operator d'affecationt

  virtual std::string getType() const;
  int getHP() const;
  virtual void takeDamage(int dmg);
protected:
  int hp;
  std::string type;
};
#endif
