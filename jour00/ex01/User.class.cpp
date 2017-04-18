#include <iostream>
#include "phonebook.class.hpp"

User::User(void) {

  User::index = 0;
  User::firstName = "";
  User::lastName = "";
  User::nickName = "";
  User::login = "";
  User::address = "";
  User::email = "";
  User::phone = "";
  User::birthday = "";
  User::favoriteMeal = "";
  User::Ucolor = "";
  User::darkestSecret = "";
  return;
}

User::~User(void) {
return;
}
