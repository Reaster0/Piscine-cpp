#include "Materiasource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	_amateria = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	_amateria = other._amateria;
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria* m)
{
	_amateria = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	if (type == "ice")
		return new Ice();
	if (type == "cure")
		return new Cure();
	std::cout << "the type is incorrect" << '\n';
	return NULL;
}