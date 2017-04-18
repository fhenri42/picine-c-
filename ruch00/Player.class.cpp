#include "Player.class.hpp"

Player::Player(void) {

  this->_hp = 100;
  this->_name = "random";

  return;
}

Player::Player(int _hp, std::string _name) : GameEntity(),
                _hp(_hp), _name(_name)
{

  return;
}

Player::Player(int _hp, std::string _name, char leftInput, char rightInput,
            char shootInput, std::string texture, Vector2 pos) :
            GameEntity(texture, pos),
            _hp(_hp),
            _name(_name),
            _leftInput(leftInput),
            _rightInput(rightInput),
            _shootInput(shootInput)
{
    return ;
}

Player::Player(Player const &src): GameEntity(), _hp(src._hp), _name(src._name){
    *this->transform = *src.transform;
    *this->image = *src.image;
    return;
}

void Player::move(const char c)
{
    if (c == this->_leftInput && this->transform->getHor().x > Player::right.x)
    {
        *this->transform -= Player::right;
    }
    else if (c == this->_rightInput && this->transform->getHor().y < COLS - 4)
    {
        *this->transform += Player::right;
    }
    else if (c == this->_shootInput)
    {
        this->_shoot();
    }
}
void Player::_shoot(void)
{
    Vector2 pos(this->transform->getPos().x + 1 , this->transform->getVert().x);
    Ammo *ammo = new Ammo("img/ammo.img", pos);
    this->_ammoController->addAmmo(ammo);
}

void Player::setAmmoController(AmmoController *ammoController)
{
    this->_ammoController = ammoController;
}
void Player::setEnnemyController(EnnemyController *ennemyController)
{
    this->_ennemyController = ennemyController;
}


Player &Player::operator=(Player const & src) {
  this->_hp = src._hp;
  this->_name = src._name;

  return *this;
}

Player::~Player(void) {

  return;
}

Vector2 Player::right(1, 0);
