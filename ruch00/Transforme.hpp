#ifndef TRANSFORME_H
# define TRANSFORME_H
# include "Vector2.hpp"

class Transforme
{
private:

    Vector2 _vert;
    Vector2 _hor;
    Vector2 _pos;
    Vector2 _dim;

    void _setRelativePos(void);
public:

    Transforme(void);
    Transforme(int x, int y);
    Transforme(Vector2 pos);
    Transforme(int x, int y, int w, int h);
    Transforme(Vector2 pos, Vector2 dim);
    Transforme(Transforme const &src);
    ~Transforme(void);

    Transforme &operator=(Transforme const &rhs);
    Transforme operator+(Vector2 const &rhs);
    Transforme operator-(Vector2 const &rhs);
    Transforme &operator+=(Vector2 const &rhs);
    Transforme &operator-=(Vector2 const &rhs);

    bool isColide(Transforme const &t);
    Transforme &moveToward(Vector2 to, float a);
    Vector2 getVert(void) const;
    Vector2 getHor(void) const;
    Vector2 getPos(void) const;
    Vector2 getDim(void) const;
    void setPos(Vector2 const &pos);
    void setDim(Vector2 const &dim);

};

std::ostream &operator<<(std::ostream &o, Transforme const &rhs);

#endif
