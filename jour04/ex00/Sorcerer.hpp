# ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "victim.hpp"
class Sorcerer
{
  public:
    Sorcerer(void);
    Sorcerer(std::string name, std::string title);     //Constructeur par defaut
    Sorcerer(Sorcerer const &src); // Copy
    ~Sorcerer(void);                // Destructeur de recopie
    Sorcerer &operator=(Sorcerer const & src);  // operator d'affecationt

    std::string getName() const;
    std::string getTitle() const;
    void polymorph(Victim const &) const;
private:
    std::string name;
    std::string title;

};
std::ostream &operator<<(std::ostream& os,const Sorcerer & src);

#endif
