# include "Transforme.hpp"

Transforme::Transforme(void)
{
    return ;
}

Transforme::~Transforme(void)
{
    return ;
}

Transforme::Transforme(Transforme const &src)
{
    *this = src;
    return ;
}

Transforme::Transforme(int x, int y)
{
    Vector2 pos = Vector2(x, y);
    this->setPos(pos);
    return ;
}

Transforme::Transforme(Vector2 pos) : _pos(pos)
{
    return ;
}

Transforme::Transforme(int x, int y, int w, int h)
{
    Vector2 pos = Vector2(x, y);
    Vector2 dim = Vector2(w, h);
    this->setDim(dim);
    this->setPos(pos);
    return ;
}
Transforme::Transforme(Vector2 pos, Vector2 dim)
{
    this->setPos(pos);
    this->setDim(dim);
    return ;
}

void Transforme::_setRelativePos(void)
{
    this->_hor.x = this->_pos.x - this->_dim.x / 2;
    this->_hor.y = this->_pos.x + this->_dim.x / 2;

    this->_vert.x = this->_pos.y - this->_dim.y / 2;
    this->_vert.y = this->_pos.y + this->_dim.y / 2;
}

Vector2 Transforme::getPos(void) const
{
    return this->_pos;
}

Vector2 Transforme::getDim(void) const
{
    return this->_dim;
}

void Transforme::setPos(Vector2 const &pos)
{
    this->_pos = pos;
    this->_setRelativePos();
}

void Transforme::setDim(Vector2 const &dim)
{
    this->_dim = dim;
    this->_setRelativePos();
}

Vector2 Transforme::getVert(void) const
{
    return this->_vert;
}

Vector2 Transforme::getHor(void) const
{
    return this->_hor;
}

Transforme &Transforme::operator=(Transforme const &rhs)
{
    (void)rhs;
    return *this;
}

Transforme Transforme::operator+(Vector2 const &rhs)
{
    Transforme res(this->_pos + rhs);
    return (res);
}

Transforme Transforme::operator-(Vector2 const &rhs)
{
    Transforme res(this->_pos - rhs);
    return (res);
}

Transforme &Transforme::operator+=(Vector2 const &rhs)
{
    this->setPos(this->_pos + rhs);
    return *this;
}

Transforme &Transforme::operator-=(Vector2 const &rhs)
{
    this->setPos(this->getPos() - rhs);
    return *this;
}

bool Transforme::isColide(Transforme const &t)
{
    Vector2 vert = t.getVert();
    Vector2 hor = t.getHor();
    if (this->_vert.y < vert.x || this->_vert.x > vert.y
    || this->_hor.x > hor.y || this->_hor.y < hor.x)
    {
        return false;
    }
    return true;
}

Transforme &Transforme::moveToward(Vector2 to, float a)
{
    this->setPos(this->_pos + to * a);
    return (*this);
}

std::ostream &operator<<(std::ostream &o, Transforme const &rhs)
{
    Vector2 pos = rhs.getPos();
    Vector2 dim = rhs.getDim();
    Vector2 ver = rhs.getVert();
    Vector2 hor = rhs.getHor();
    o << "pos x : " << pos.x << " pos y: " << pos.y << std::endl;
    o << "dim x : " << dim.x << " dim y: " << dim.y << std::endl;
    o << "min x : " << hor.x << " max x: " << hor.y << std::endl;
    o << "min y : " << ver.x << " max y: " << ver.y << std::endl;
    return o;
}
