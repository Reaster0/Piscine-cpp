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

float Fixed::toFloat() const
{

	return roundf((float)value / (float)(1 << bits) * 100) / 100;
}

int Fixed::toInt(void) const
{
	return value >> bits;
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

Fixed::Fixed(const int init)
{
	value = init << bits;
}

Fixed::Fixed(const float init)
{
	value = roundf(init * (1 << bits));
	//value = (int)roundf((init - (int)init) * 100); //don't divide by 100 equal << bits
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}