# ifndef AMMO_HPP
# define AMMO_HPP

#include <string>
#include "GameEntity.hpp"
#include "Vector2.hpp"

class Ammo : public GameEntity
{
  public:
    Ammo(void);
    Ammo(std::string texture, Vector2 pos);
    Ammo(Ammo const &src); // Copy
    ~Ammo(void);                // Destructeur de recopie
    Ammo &operator=(Ammo const & src);  // operator d'affecationt

    void goUp();
    void goDown();
    static Vector2 up;
    bool isEnemy;
};

#endif
