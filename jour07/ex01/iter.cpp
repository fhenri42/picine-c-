#include <iostream>

template <typename T >
void iter(T *array, size_t lenght,void (*f)(T const &arg)) {
size_t x = 0;
while (x < lenght) { f(array[x]); x++; }
return;
}

template< typename T >
void display( T const & x ) { std::cout << x << std::endl; return; }

int main() {
int array[] = { 0, 1, 2, 3, 4 };
iter(array, 5, display);
return 0;
}
