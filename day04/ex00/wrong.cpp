#include "wrong.hpp"

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	std::cout << "constructor by copy of an WrongAnimal has been called" << std::endl;
	*this = other;
}

WrongAnimal::WrongAnimal()
{
	std::cout << "constructor by default of an WrongAnimal has been called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "deconstructor of an WrongAnimal has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other)
{
	this->type = other.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*laugh in WrongAnimal noise*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongCat::WrongCat()
{
	std::cout << "constructor by default of WrongCat is called" << std::endl;
	type = "wrongcat";
}

WrongCat::WrongCat(WrongCat const& other)
{
	std::cout << "constructor by copy of WrongCat is called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor of WrongCat is called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& other)
{
	this->type = other.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "i'm indeed a wrongcat" << std::endl;
}