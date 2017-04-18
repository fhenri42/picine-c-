# ifndef CONVERSION_CLASS_HPP
# define CONVERSION_CLASS_HPP

#include <iostream>

class ConversionClass
{
  public:
    ConversionClass(void);
    ConversionClass(ConversionClass const &src); // Copy
    ~ConversionClass(void);                // Destructeur de recopie
    ConversionClass &operator=(ConversionClass const & src);  // operator d'affecationt


    void conversionInt(int i);
    void conversionChar(char c);
    void conversionFloat(float f);
    void conversionDouble(double d);
    void wichType(char *str);
    std::string getForm();

private:
  std::string form;
};

std::ostream &operator<<(std::ostream& os,const ConversionClass & src);
#endif
