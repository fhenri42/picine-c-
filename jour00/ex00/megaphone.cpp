#include <iostream>

int main (int argc, char **argv) {

  if (argc <= 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
  }

  for (int i = 1; i < argc; ++i) {
    int x = 0;
    while (argv[i][x]) {
    std::cout <<(char)toupper(argv[i][x]);
      x++;
    }
  }

  std::cout << std::endl;
  return 0;
}
