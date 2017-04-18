#include <iostream>

int main () {
  std::string str = "HI THIS IS BRAIN";
  std::string *strPoint = &str;
  std::string &refstr = str;
  std::cout << "pointeur = "<<*strPoint << '\n';
  std::cout << "ref = "<<refstr << '\n';
  return 0;
}
