#include <iostream>
#include "Conversion.class.hpp"
#include <math.h>
#include <cmath>
#include <iomanip>
#include <limits>

ConversionClass::ConversionClass(void) {
  this->form = "init";
  return;
}

ConversionClass::ConversionClass(ConversionClass const &src) {
  (void)src;
  std::cout << "Copy of constructeur called "  << std::endl;
  return;
}


ConversionClass &ConversionClass::operator=(ConversionClass const & src) {
  std::cout << "In the = operator" << std::endl;
  (void)src;
  return *this;
}

ConversionClass::~ConversionClass(void) {
  return;
}
void ConversionClass::wichType(char *str) {
  int x = 0;
  int nbr = 0;
  int nbr1 = 0;

  if (strlen(str) == 1 && !isdigit(str[0])) {
    this->form = "char";
    return;
  }
  if (str[x] == '-') { x++; }
  if (!strcmp(str,"-inff") || !strcmp(str,"+inff") || !strcmp(str,"nanf") || !strcmp(str,"inff") ) {this->form = "float"; return;}
  if (!strcmp(str,"-inf") || !strcmp(str,"+inf") || !strcmp(str,"nan") || !strcmp(str,"inf") ) {this->form = "double"; return;}

  while (str[x]) {
    if (!isdigit(str[x])) {
      if (str[x] == 'f' && nbr < 1 && !str[x +1]) {
        this->form = "float";
        nbr++;
      } else if (str[x] == '.' && nbr1 < 1) {
        this->form = "double";
        nbr1++;
      } else {
        this->form = "impossible";
        return;
      }
    }
    x++;
  }
  if (this->form != "float" && this->form != "double") { this->form = "int"; }
  return;
}

std::string ConversionClass::getForm() {
  return this->form;
}

void ConversionClass::conversionChar(char c) {
  std::cout << "char: " << "'" << c << "'" << std::endl;
  std::cout << "int: " << static_cast<int> (c) << std::endl;
  std::cout << "float: " << static_cast<float> (c) << "f" <<  std::endl;
  std::cout << "double: " << static_cast<double> (c) << std::endl;
}

void ConversionClass::conversionInt(int i) {
  if (isprint(i)) {
    std::cout << "char: " << "'" << static_cast<char> (i) << "'" << std::endl;
  } else { std::cout << "char: " << "Non displayable" << std::endl; }

  std::cout << "int: " << i << std::endl;

  if (std::fmod(i, 1) == 0)  {
    std::cout <<  "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout <<  "double: " << static_cast<double> (i) << ".0"<< std::endl;
  } else {
    std::cout <<  "float: " << static_cast<float> (i) << "f" << std::endl;
    std::cout <<  "double: " << static_cast<double> (i) << std::endl;
  }

  return;
}

void ConversionClass::conversionFloat(float f) {

  if (isprint(f)) {
    std::cout << "char: " << "'" << static_cast<char> (f) << "'" << std::endl;
  } else { std::cout << "char: " << "Non displayable" << std::endl; }

  if (f < INT_MAX && f > INT_MIN) {
    std::cout << "int: " << static_cast<int> (f) << std::endl;
  } else { std::cout << "int: impossible" << std::endl; }

  if (std::fmod(f, 1) == 0)  {
    std::cout <<  "float: " << f << ".0f" << std::endl;
    std::cout <<  "double: " << static_cast<double> (f) << ".0"<< std::endl;
  } else {
    std::cout <<  "float: " << f << "f" << std::endl;
    std::cout <<  "double: " << static_cast<double> (f) << std::endl;
  }

  return;
}


void ConversionClass::conversionDouble(double d) {
  if (isprint(d)) {
    std::cout << "char: " << "'" << static_cast<char> (d) << "'" << std::endl;
  } else { std::cout << "char: " << "Non displayable" << std::endl; }

  if (d < INT_MAX && d > INT_MIN) {
    std::cout << "int: " << static_cast<int> (d) << std::endl;
  } else { std::cout << "int: impossible" << std::endl; }

  if (std::fmod(d, 1) == 0)  {
    std::cout <<  "float: " << static_cast<float>(d) << ".0f" << std::endl;
    std::cout <<  "double: " << (d) << ".0"<< std::endl;
  } else {
    std::cout <<  "float: " << static_cast<float> (d) << "f" << std::endl;
    std::cout <<  "double: " << (d) << std::endl;
  }
  return;
}
