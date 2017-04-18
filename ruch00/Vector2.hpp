#ifndef VECTOR2_H
# define VECTOR2_H

# include <iostream>

class Vector2
{

public:

    Vector2(void);
    Vector2(int const x, int const y);
    Vector2(Vector2 const &src);
    ~Vector2(void);

    Vector2 &operator=(Vector2 const &rhs);
    Vector2 operator+(Vector2 const &rhs);
    Vector2 &operator+=(Vector2 const &rhs);
    Vector2 operator-(Vector2 const &rhs);
    Vector2 &operator-=(Vector2 const &rhs);
    Vector2 operator*(Vector2 const &rhs);
    Vector2 operator*(float const &rhs);
    Vector2 operator/(Vector2 const &rhs);
    bool operator==(Vector2 const &rhs);
    bool operator!=(Vector2 const &rhs);

    int x;
    int y;
};

std::ostream &operator<<(std::ostream &o, Vector2 const &rhs);

#endif
