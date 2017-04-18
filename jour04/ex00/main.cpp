#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
  Sorcerer robert("Robert", "the Magnificent");
  Victim jim("Jimmy");
  Peon joe("Joe");
  std::cout << robert << jim << joe;
  robert.polymorph(jim);
  robert.polymorph(joe);
// more test
  Sorcerer robert1;
  Victim jim1;
  Peon joe1;
  std::cout << robert1 << jim1 << joe1;
  robert1.polymorph(jim1);
  robert1.polymorph(joe1);
  return 0;
}
