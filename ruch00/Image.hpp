#ifndef IMAGE_HPP
# define IMAGE_HPP

# include <iostream>
# include <string.h>
# include <fstream>
# include <sstream>
# include "Transforme.hpp"
# include "Vector2.hpp"

class Image
{
private:
  Transforme *_transform;
    std::string _fileName;
    Vector2 _dim;

    void readFile(std::string file);
public:
    Image(void);
    Image(Transforme *transform, std::string fileName);
    Image(Image const &src);
    ~Image(void);

    Image &operator=(Image const &rhs);

    std::string *image;

    void setNbLines(size_t nb);
    void setNbCols(size_t nb);
    void getWidth(void);
    void setNbLines(int nb);
    void setNbCols(int nb);
    Vector2 getNbCols(void) const;
    Vector2 getDim(void) const;
};

std::ostream &operator<<(std::ostream &o, Image const &rhs);

#endif
