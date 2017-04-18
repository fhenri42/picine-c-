# include "Vector2.hpp"

Vector2::Vector2(void)
{
    return ;
}

Vector2::Vector2(int const x, int const y) : x(x), y(y)
{
    return ;
}

Vector2::~Vector2(void)
{
    return ;
}

Vector2::Vector2(Vector2 const &src)
{
    *this = src;
    return ;
}

Vector2 &Vector2::operator=(Vector2 const &rhs)
{
    this->x = rhs.x;
    this->y = rhs.y;

    return *this;
}

Vector2 Vector2::operator+(Vector2 const &rhs)
{
    Vector2 res(rhs.x + this->x, rhs.y + this->y);

    return (res);
}

Vector2 &Vector2::operator+=(Vector2 const &rhs)
{
    this->x += rhs.x;
    this->y += rhs.y;
    return (*this);
}

Vector2 Vector2::operator-(Vector2 const &rhs)
{
    Vector2 res(this->x - rhs.x, this->y - rhs.y);

    return (res);
}

Vector2 &Vector2::operator-=(Vector2 const &rhs)
{
    this->x -= rhs.x;
    this->y -= rhs.y;
    return (*this);
}

Vector2 Vector2::operator*(Vector2 const &rhs)
{
    Vector2 res(this->x * rhs.x, this->y * rhs.y);

    return (res);
}

Vector2 Vector2::operator*(float const &rhs)
{
    Vector2 res(this->x * rhs, this->y * rhs);

    return (res);
}

Vector2 Vector2::operator/(Vector2 const &rhs)
{
    Vector2 res(this->x / rhs.x, this->y / rhs.y);

    return (res);
}

bool Vector2::operator==(Vector2 const &rhs)
{
    return (this->x == rhs.x && this->y == rhs.y);
}

bool Vector2::operator!=(Vector2 const &rhs)
{
    return (this->x != rhs.x && this->y != rhs.y);
}

std::ostream &operator<<(std::ostream &o, Vector2 const &rhs)
{
    o << "x : " << rhs.x << " y: " << rhs.y << std::endl;
    return o;
}
