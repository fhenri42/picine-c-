# ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
  public:
    Victim(std::string name);     //Constructeur par defaut
    Victim(Victim const &src); // Copy
    ~Victim(void);                // Destructeur de recopie
    Victim &operator=(Victim const & src);  // operator d'affecationt

    std::string getName() const;
    void introduce();
    void getPolymorphed(void) const;
    std::string name;
    Victim(void);
private:
};

std::ostream &operator<<(std::ostream& os,const Victim & src);
#endif
