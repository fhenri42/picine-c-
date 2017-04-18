# ifndef IENNEMY_HPP
# define IENNEMY_HPP

#include <string>
#include "GameEntity.hpp"
#include "Vector2.hpp"

class Iennemy : public GameEntity
{
  public:
    Iennemy(void);
    Iennemy(std::string texture, Vector2 pos);
    Iennemy(Iennemy const &src); // Copy
    ~Iennemy(void);                // Destructeur de recopie
    Iennemy &operator=(Iennemy const & src);  // operator d'affecationt

    void goUp();
    void goDown();
    static Vector2 up;
    bool isEnemy;
};

#endif
