#ifndef ICE
#define ICE
#include "Amateria.hpp"

class Ice : public AMateria
{
	public:
		Ice():AMateria("Ice"){}
		Ice(Ice const& other):AMateria(other){}
		~Ice(){}

		void use(ICharacter& target){std::cout << "*shoot an ice bolt at " << target.getName() << " \n";}
		AMateria *clone() const {return new Ice(*this);}
};

#endif