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
	return ((float)value / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return value >> bits;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	value = other.value;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	return os << other.toFloat();
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int init)
{
	std::cout << "Int constructor called" << std::endl;
	value = init << bits;
}

Fixed::Fixed(const float init)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(init * (1 << bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}