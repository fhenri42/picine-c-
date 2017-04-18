# ifndef GAMEENTITY_HPP
# define GAMEENTITY_HPP

#include <iostream>
#include <ncurses.h>
#include "Vector2.hpp"
#include "Transforme.hpp"
#include "Image.hpp"

class GameEntity
{
  public:
    GameEntity(void);
    GameEntity(std::string texture, Vector2 pos);
    GameEntity(GameEntity const &src); // Copy
    ~GameEntity(void);                // Destructeur de recopie
    GameEntity &operator=(GameEntity const & src);  // operator d'affecationt

    void show(void) const;

    Transforme *transform;
    Image *image;
};

std::ostream &operator<<(std::ostream &o, GameEntity const &rhs);

#endif
