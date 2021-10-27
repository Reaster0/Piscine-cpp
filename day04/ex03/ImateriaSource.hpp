#ifndef IMATERIASOURCE
#define IMATERIASOURCE
#include "Amateria.hpp"

class IMateriaSource
{
		public:
			virtual ~IMateriaSource(){}
			virtual void learnMateria(AMateria*) = 0;
			virtual AMateria *createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource, public AMateria
{
	public:
		MateriaSource();
		~MateriaSource();
		int temp;
};

#endif