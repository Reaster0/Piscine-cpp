#ifndef AMATERIA
#define AMATERIA
#include <iostream>
#include "Icharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(AMateria const &other);
		~AMateria();

		AMateria &operator=(const AMateria &other);

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif