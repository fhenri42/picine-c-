# ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class User
{
public:
  User(void);
  ~User(void);
  int index;
  std::string firstName;
  std::string lastName;
  std::string nickName;
  std::string login;
  std::string email;
  std::string address;
  std::string phone;
  std::string birthday;
  std::string favoriteMeal;
  std::string Ucolor;
  std::string darkestSecret;
};

#endif
