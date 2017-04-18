# include "GameEntity.hpp"

GameEntity::GameEntity(void)
{
    this->transform = new Transforme();
    this->image = new Image();
    return ;
}

GameEntity::~GameEntity(void)
{
    delete this->transform;
    delete this->image;
    return ;
}

GameEntity::GameEntity(std::string texture, Vector2 pos)
{
    this->transform = new Transforme(pos);
    this->image = new Image(this->transform, texture);
}

GameEntity::GameEntity(GameEntity const &src)
{
    *this = src;
    this->transform = new Transforme();
    this->image = new Image();
    return ;
}

void GameEntity::show(void) const
{
    int length = (*this->image).getDim().y;
    int y = (*this->transform).getVert().x;
    int x = (*this->transform).getHor().x;
    for (int i = 0; i < length; ++i)
    {
        mvprintw(y + i, x,(*this->image).image[i].c_str());
    }
}

GameEntity &GameEntity::operator=(GameEntity const &rhs)
{
    this->transform = rhs.transform;
    return *this;
}

std::ostream &operator<<(std::ostream &o, GameEntity const &rhs)
{
    o << *rhs.transform << *rhs.image;
    return o;
}
