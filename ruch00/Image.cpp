# include "Image.hpp"

Image::Image(void)
{
    this->image = new std::string[0];
    return ;
}

Image::~Image(void)
{
    delete [] this->image;
    return ;
}

Image::Image(Image const &src)
{
    *this = src;
    this->image = new std::string[0];
    return ;
}

Image::Image(Transforme *transforme, std::string fileName) :
                                                        _transform(transforme),
                                                        _fileName(fileName)
{
    this->readFile(fileName);
    return ;
}

Image &Image::operator=(Image const &rhs)
{
  (void)rhs;
    return *this;
}

void Image::readFile(std::string file)
{
  (void)file;
    std::ifstream ifs(this->_fileName);
    int i;
    if (!ifs.is_open())
    {
        std::cout << "Open failed" << std::endl;
        exit (1);
    }

    std::string garbage;
    for (i = 0; std::getline(ifs, garbage); ++i){}
    this->image = new std::string[i];

        ifs.close();
        std::ifstream ifs2(this->_fileName);
        if (!ifs2.is_open())
        {
            std::cout << "Open failed" << std::endl;
            exit (1);
        }
        for (i = 0; std::getline(ifs2, this->image[i]); ++i){}
        this->setNbLines(i);
        this->getWidth();
    }

    void Image::getWidth(void)
    {
        size_t max = 0;
        int i;
        for (i = 0; i < this->_dim.y; ++i)
        {
            if (this->image[i].length() > max)
                max = this->image[i].length();
        }
        this->setNbCols(i);
    }

    void Image::setNbLines(int nb)
    {
        this->_dim.y = nb;
        this->_transform->setDim(this->_dim);
    }
    void Image::setNbCols(int nb)
    {
        this->_dim.x = nb;
        this->_transform->setDim(this->_dim);
    }

    Vector2 Image::getDim(void) const
    {
        return this->_dim;
    }

    std::ostream &operator<<(std::ostream &o, Image const &rhs)
    {
        Vector2 dim = rhs.getDim();
        for (int i = 0; i < dim.y; ++i)
        {
            o << rhs.image[i] << std::endl;
        }
        return o;
    }
