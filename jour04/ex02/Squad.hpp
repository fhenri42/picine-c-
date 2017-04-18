#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	ISpaceMarine	**marines;
	int				count;
	int				arrayLen;
public:
	Squad();
	Squad(Squad const & src);
	virtual ~Squad();

	Squad			&operator=(Squad const &rhs);
	int				getCount() const;
	ISpaceMarine	*getUnit(int) const;
	int				push(ISpaceMarine*);
};

#endif
