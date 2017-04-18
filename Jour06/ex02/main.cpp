#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

#include "C.class.hpp"
#include "B.class.hpp"
#include "A.class.hpp"
#include "Base.class.hpp"


void identify_from_reference(Base &p) {
  try {
    C &c = dynamic_cast<C &>(p);
    (void)c;
    std::cout << "C" << std::endl;
  } catch (std::exception &e) {
    try{
      B &b = dynamic_cast<B &>(p);
      (void)b;
      std::cout << "B" << std::endl;
    }
    catch (std::exception &e) { std::cout << "A" << std::endl; }
  }
}

void identify_from_pointer(Base *p) {


  if (dynamic_cast< A* >(p)) {std::cout << "A" << '\n';}
  else if (dynamic_cast< B* >(p)) {std::cout << "B" << '\n';}
  else {std::cout << "C" << '\n';}
}

Base * generate(void) {
  srand(time(NULL));
  int nbr = rand() % 3 + 1;
  if (nbr == 1) { A *a = new A(); return a; }
  if (nbr == 2) { B *b = new B(); return b; }
  if (nbr == 3) { C *c = new C(); return c; }
  return NULL;
}

int main () {
  Base *test = generate();
  identify_from_pointer(test);
  identify_from_reference(*test);

  return 0;
}
