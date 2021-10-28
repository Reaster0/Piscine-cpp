#ifndef CURE
#define CURE
#include "Amateria.hpp"

class Cure : public AMateria
{
	public:
		Cure():AMateria("Cure"){}
		Cure(Cure const& other):AMateria(other){}
		~Cure();

		void use(ICharacter& target){std::cout << "*heals " << target.getName() << "'s wounds*\n";}
		AMateria *clone() const {return new Cure(*this);}
};

#endif