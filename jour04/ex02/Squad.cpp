#include <cstdlib>
#include "Squad.hpp"
#include <iostream>

Squad::Squad() : marines(new ISpaceMarine*[64]), count(0), arrayLen(64)
{
}

Squad::Squad(Squad const &src) : marines(new ISpaceMarine*[src.getCount()]), arrayLen(src.getCount())
{
	int i = 0;
	while (i < src.getCount())
		marines[i] = src.getUnit(i)->clone();
}

Squad::~Squad()
{
	int i = 0;
	while (i < this->count)
		delete marines[i++];
	delete[] marines;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	int i = 0;
	while (i < this->count)
		delete marines[i];
	this->count = 0;
	i = 0;
	while (i < rhs.count)
		this->push(rhs.getUnit(i));
	return (*this);
}

int				Squad::getCount() const
{
	return (count);
}

ISpaceMarine	*Squad::getUnit(int unit) const
{
	if (unit < count)
		return (marines[unit]);
	else
		return (NULL);
}

int				Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine	**newArray;

	if (count < arrayLen)
		marines[count++] = marine;
	else
	{
		newArray = new ISpaceMarine*[++arrayLen];
		int i = 0;
		while (i < arrayLen - 1)
		{
			newArray[i] = marines[i];
			i++;
		}
		newArray[count++] = marine;
		delete[] marines;
		marines = newArray;
	}
	return (count);
}
