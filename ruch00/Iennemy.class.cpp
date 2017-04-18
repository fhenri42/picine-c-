#include "Iennemy.class.hpp"

Iennemy::Iennemy(void) : GameEntity(){

  return;
}

Iennemy::Iennemy(std::string texture, Vector2 pos) : GameEntity(texture, pos) {

  return;
}


Iennemy::Iennemy(Iennemy const &src) : GameEntity() {
    *this = src;
  return;
}

Iennemy &Iennemy::operator=(Iennemy const & src) {

  this->transform = src.transform;
  return *this;
}

Iennemy::~Iennemy(void) {

  return;
}

void Iennemy::goUp() {
    *this->transform += Iennemy::up;
}

void Iennemy::goDown() {
    *this->transform -= Iennemy::up;
}

Vector2 Iennemy::up(0,-1);
