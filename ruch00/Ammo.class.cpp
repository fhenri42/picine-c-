#include "Ammo.class.hpp"

Ammo::Ammo(void) : GameEntity(){

  return;
}

Ammo::Ammo(std::string texture, Vector2 pos) : GameEntity(texture, pos) {

  return;
}


Ammo::Ammo(Ammo const &src) : GameEntity() {
    *this = src;
  return;
}

Ammo &Ammo::operator=(Ammo const & src) {
  this->transform = src.transform;
  return *this;
}

Ammo::~Ammo(void) {

  return;
}

void Ammo::goUp() {
    *this->transform += Ammo::up;
}

void Ammo::goDown() {
    *this->transform -= Ammo::up;
}

Vector2 Ammo::up(0,-1);
