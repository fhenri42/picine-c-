# ifndef AMMOCONTROLLER_HPP
# define AMMOCONTROLLER_HPP

#include <string>
#include "GameEntity.hpp"
#include "Vector2.hpp"
#include "Ammo.class.hpp"
#include "EnnemyController.hpp"
struct AmmoList
{
  Ammo *ammo;
  struct AmmoList *next;
};

class AmmoController
{

  public:
    AmmoController(void);
    AmmoController(AmmoController const &src); // Copy
    ~AmmoController(void);                // Destructeur de recopie

    AmmoController &operator=(AmmoController const & src);  // operator d'affecationt

    void mooveAmmo(void);
    void addAmmo(Ammo *ammo);
    void deleteAmmo(Ammo *ammo);
    int getAmmo();

    int ammoShot;
    struct AmmoList *ammoList;
};

#endif
