#ifndef ICHARACTER
#define ICHARACTER
#include "Amateria.hpp"
#include "Imateriasource.hpp"
#include "Materiasource.hpp"
class AMateria;
class MateriaSource;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif