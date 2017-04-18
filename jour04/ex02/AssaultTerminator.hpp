#ifndef AssaultTerminator_HPP
# define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator();

	AssaultTerminator		&operator=(AssaultTerminator const &rhs);

	ISpaceMarine		*clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;
};

#endif
