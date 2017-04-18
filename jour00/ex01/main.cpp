#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "phonebook.class.hpp"

int Sheach(User user[8], int index) {
  int x = 0;
  int nbr = -1;
  std::cout << std::setw(13) << "INDEX | "<< std::setw(13) << "FIRST NAME | "<< std::setw(13) << "LAST NAME | " << std::setw(13) <<"NICK NAME | " << std::endl;
  while (x < index && x <= 7) {
    std::cout << std::setw(10) << user[x].index  << " | ";
    if (user[x].firstName.length() > 10) {
      std::cout << user[x].firstName.substr(0,9) << "." << " | ";
    } else {
      std::cout << std::setw(10) << user[x].firstName.substr(0,10)  << " | ";
    }
    if (user[x].lastName.length() > 10) {
      std::cout << user[x].lastName.substr(0,9) << "." << " | ";
    } else {
      std::cout << std::setw(10) << user[x].lastName.substr(0,10)  << " | ";
    }
    if (user[x].nickName.length()> 10) {
      std::cout << user[x].nickName.substr(0,9)<< "." << " | ";
    } else {
      std::cout << std::setw(10) << user[x].nickName.substr(0,10) << " | " << std::endl;
    }
    x++;
  }
  std::cout << "To see more information about a user entered is index:" << '\n';
  std::string line;

  while (std::getline(std::cin, line)) {
    std::cin >> nbr;
    if (nbr >= 0 && nbr < index) {
      std::cout << user[nbr].firstName << std::endl;
      std::cout << user[nbr].lastName << std::endl;
      std::cout << user[nbr].nickName << std::endl;
      std::cout << user[nbr].login << std::endl;
      std::cout << user[nbr].address << std::endl;
      std::cout << user[nbr].email << std::endl;
      std::cout << user[nbr].phone << std::endl;
      std::cout << user[nbr].birthday << std::endl;
      std::cout << user[nbr].favoriteMeal << std::endl;
      std::cout << user[nbr].Ucolor << std::endl;
      std::cout << user[nbr].darkestSecret << std::endl;
      return 0;
    } else {
      std::cin.clear();
      std::cout << "This is not a valid input" << '\n';
    }
  }
  return 0;
}

int addContact(User *oneUser, int index) {
  oneUser->index = index;
  std::cout << "First Name : ";
  std::cin >> oneUser->firstName;
  std::cout << "Last Name : ";
  std::cin >> oneUser->lastName;
  std::cout << "Nick Name : ";
  std::cin >> oneUser->nickName;
  std::cout << "Login : ";
  std::cin >> oneUser->login;
  std::cout << "Address: ";
  std::cin >> oneUser->address;
  std::cout << "Email : ";
  std::cin >> oneUser->email;
  std::cout << "Phone : ";
  std::cin >> oneUser->phone;
  std::cout << "Birthday : ";
  std::cin >> oneUser->birthday;
  std::cout << "Favorite Meal : ";
  std::cin >> oneUser->favoriteMeal;
  std::cout << "Underwear Color : ";
  std::cin >> oneUser->Ucolor;
  std::cout << "Darkest Secret : ";
  std::cin >> oneUser->darkestSecret;
  return 0;
}

int main (void) {
  User tabUser[8];
  char buff[512];
  int x = 0;
  std::string str ("EXIT");
  std::string str1 ("ADD");
  std::string str2 ("SEARCH");


  std::cout << "Welecome to the awesome phonebook software" << std::endl;
  std::cout << "you can use the ADD, SEARCH and EXIT command to interact with the phonebook" << std::endl;
  while (1) {
    std::cin.clear();
    std::cout << "your command: ";
    std::cin >> buff;
    if (str == buff) {
      return 0;
    }
    if (str1 == buff) {
      if (x >= 8) {
        std::cout << "Sorry you have more than 8 contact" << std::endl;
      } else { addContact(&tabUser[x], x); }
      x++;
    }
    if (str2 == buff) {
      Sheach(tabUser, x);
    }
  }
}
