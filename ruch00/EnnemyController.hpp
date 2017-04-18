# ifndef ENNEMYCONTROLLER_HPP
# define ENNEMYCONTROLLER_HPP

#include <string>
#include "GameEntity.hpp"
#include "Vector2.hpp"
#include "Iennemy.class.hpp"

struct EnnemyList
{
  Iennemy *ennemy;
  struct EnnemyList *next;
};

class EnnemyController : public GameEntity
{
  public:

    EnnemyController(void);
    EnnemyController(EnnemyController const &src); // Copy
    ~EnnemyController(void);                // Destructeur de recopie

    EnnemyController &operator=(EnnemyController const & src);  // operator d'affecationt

    void mooveEnnemy(void);
    void addEnnemy(Iennemy *ennemy);
  //  void addRandomEnnemy(Iennemy *ennemy);
    EnnemyList *deleteEnnemy(Iennemy *ennemy);
    int getScore();
    struct EnnemyList *ennemyList;

    int ennemyDead;
};

#endif
