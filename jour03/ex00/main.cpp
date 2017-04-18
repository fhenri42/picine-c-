#include <iostream>
#include "FragTrap.hpp"

int main () {
  FragTrap test("MAN");
  FragTrap test1("Robot");
  for (size_t k = 0; k < 5; k++) {
    std::cout << "MAN turn:" << '\n';
    test.takeDamage(test1.rangedAttack(test.name));
    test.takeDamage(test1.meleeAttack(test.name));
    test.takeDamage(test1.vaulthunter_dot_exe(test.name));
    test.beRepaired(10);
    std::cout << "Robot turn:" << '\n';
    test1.takeDamage(test.rangedAttack(test1.name));
    test1.takeDamage(test.meleeAttack(test1.name));
    test1.takeDamage(test.vaulthunter_dot_exe(test1.name));
    test1.beRepaired(10);
    if (test.hitPoint <= 0) {
      std::cout << test.name << " is dead "<< test1.name << "Win !!" << std::endl;
      return 0;
    }
    if (test1.hitPoint <= 0) {
      std::cout << test1.name << " is dead "<< test.name << "Win !!" << std::endl;
      return 0;
    }
  }
  return 0;
}
//test.takeDamage(test1.rangedAttack(test.name))
