#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{

}

void Fixed::setRawBits(int const raw)
{

}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(Fixed &copy)
{
	this->value = copy.value;
}
