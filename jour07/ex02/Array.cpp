#include <iostream>
#include <stdexcept>

template<typename T>
class Array
{
private:
  T *_array;
  unsigned int _len;
public:
  Array(void) {
    this->_array = new T[0];
    this->_len = 1;
    return;
  }

  Array(unsigned int n) {
    this->_array = new T[n];
    this->_len = n;
    return;
  }

  Array(Array & src) {
    *this = src;
    return;
  }

  Array & operator=(Array & src)
  {
    std::cout << "HELLO" << '\n';
    delete [] this->_array;
    this->_array = new T[src._len];
    for (unsigned int x=0; x <= src._len; x++ ) { this->_array[x] = src._array[x]; }
    this->_len = src._len;
    return (*this);
  }

  ~Array(void) {
    delete [] this->_array;
    return;
  }

  unsigned int size(void) const {
    return this->_len;
  }

  T & operator[](unsigned int n) {
    if (n >= this->_len)
    throw std::runtime_error("Not allocated memory, you will segfault");
    return this->_array[n];
  }
};
