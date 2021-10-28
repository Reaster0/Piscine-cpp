#include "Amateria.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria()
{
	_type = "default";
}

AMateria::AMateria(AMateria const &other)
{
	_type = other.getType();
}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &other)
{
	_type = other.getType();
	return *this;
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "use default material on " << target.getName() << '\n';
}
