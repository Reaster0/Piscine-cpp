#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return (*this);
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}