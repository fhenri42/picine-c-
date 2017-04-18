#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main () {
  FragTrap test("MAN");
  FragTrap test1("Robot");
  ScavTrap scavTest("MAN SCAV");
  ScavTrap scavTest1("Robot SCAV");
  NinjaTrap ninjaTest("MAN NIJA");
  NinjaTrap ninjaTest1("Robot NIJA");
  ClapTrap boss("IN AM THE PARRENT");
  SuperTrap superTest("MAN SUPER");
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

    std::cout << "MAN SCAV turn:" << '\n';
    scavTest.takeDamage(scavTest1.rangedAttack(scavTest.name));
    scavTest.takeDamage(scavTest1.meleeAttack(scavTest.name));
    scavTest.challengeNewcomer(scavTest1.name);
    scavTest.beRepaired(10);
    std::cout << "Robot SCAV turn:" << '\n';
    scavTest1.takeDamage(scavTest.rangedAttack(scavTest1.name));
    scavTest1.takeDamage(scavTest.meleeAttack(scavTest1.name));
    scavTest1.challengeNewcomer(scavTest.name);
    scavTest1.beRepaired(10);

    std::cout << "MAN NINJA turn:" << '\n';
    ninjaTest.takeDamage(ninjaTest1.rangedAttack(ninjaTest.name));
    ninjaTest.takeDamage(ninjaTest1.meleeAttack(ninjaTest.name));
    ninjaTest.ninjaShoebox(test);
    ninjaTest.ninjaShoebox(test1);
    ninjaTest.ninjaShoebox(scavTest);
    ninjaTest.ninjaShoebox(scavTest1);
    ninjaTest.ninjaShoebox(ninjaTest);
    ninjaTest.ninjaShoebox(ninjaTest1);
    ninjaTest.beRepaired(10);
    std::cout << "Robot NINJA turn:" << '\n';
    ninjaTest1.takeDamage(ninjaTest.rangedAttack(ninjaTest1.name));
    ninjaTest1.takeDamage(ninjaTest.meleeAttack(ninjaTest1.name));
    ninjaTest1.ninjaShoebox(test);
    ninjaTest1.ninjaShoebox(test1);
    ninjaTest1.ninjaShoebox(scavTest);
    ninjaTest1.ninjaShoebox(scavTest1);
    ninjaTest1.ninjaShoebox(ninjaTest);
    ninjaTest1.ninjaShoebox(ninjaTest1);
    ninjaTest1.beRepaired(10);



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
