#ifndef MATERIASOURCE
#define MATERIASOURCE
#include "Imateriasource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_amateria;

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();
		void learnMateria(AMateria* m);
		AMateria *createMateria(std::string const &type);
};

#endif