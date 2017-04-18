#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <limits.h>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

void *serialize(void) {

  const char list[] = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int nb = std::rand() % INT_MAX;

  char *sequence = new char[8 + 4 + 8];
  char *value = static_cast<char*>(static_cast<void*>(&nb));

  int i = 0;

  while (i < 8) { sequence[i] = list[std::rand() % sizeof(list) - 1]; i++; }

  while (i < 8 + 4) { sequence[i] = value[i - 8]; i++; }

  while (i < 8 + 4 + 8) { sequence[i] = list[std::rand() % sizeof(list) - 1]; i++; }
  return (sequence);
}


Data * deserialize(void *raw)
{
    Data *data = new Data;
    data->s2 = std::string(static_cast<char *>(raw), 8);
    data->n = *reinterpret_cast<int *>(static_cast<char *>(raw) + 8);
    data->s1 = std::string((static_cast<char *>(raw) + 8 + 4), 8);
    return (data);
}

int main(void) {
    std::srand(time(NULL));
    void *s = serialize();
    std::cout << "Memory adress: " << s << std::endl;
    std::cout << "Serialized data: "  << std::string(static_cast<char *>(s), 8 + 4 + 8) << std::endl;
    std::cout << "\nDeserialized data: " << std::endl;
    Data *d = deserialize(s);
    std::cout << "first string: " << d->s1 << std::endl;
    std::cout << "integer: " << d->n << std::endl;
    std::cout << "second string: " << d->s2 << std::endl;
    return (0);
}
