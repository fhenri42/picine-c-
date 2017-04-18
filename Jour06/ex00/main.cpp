#include <iostream>
#include <string>
#include "Conversion.class.hpp"

void display(char *str) {
  ConversionClass conver;

  conver.wichType(str);
  std::string form = conver.getForm();

  try {
    if (form == "char") { conver.conversionChar(str[0]);}
    if (form == "int") { conver.conversionInt(std::stoi(str)); }
    if (form == "float") { conver.conversionFloat(std::stof(str)); }
    if (form == "double") {conver.conversionDouble(std::stod(str));}
    if (form == "impossible") { std::cout << "Not a valid input" << '\n'; }
  } catch(const std::exception &a) {
    conver.conversionDouble(std::stod(str));
  }
}

int main (int argc, char **argv) {

  if (argc <= 1 ) {
    std::cout << "Plz add an valid input" << std::endl;
    return 0;
  }

  display(argv[1]);

  return 0;
}
