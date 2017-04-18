#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _weapon(weapon){
  return ;
}

Weapon::~Weapon() {
  return ;
}

std::string const & Weapon::getType() const {
	return this->_weapon;
}

void				Weapon::setType(std::string weapon) {
	this->_weapon = weapon;
}
