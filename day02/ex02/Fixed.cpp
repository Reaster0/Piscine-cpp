#include "Fixed.hpp"

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return a;
	return b;
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
	return os << other.toFloat();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	value = other.value;
	return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator+(const Fixed &other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	operator++();
	return copy;
}

Fixed &Fixed::operator--(void)
{
	value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	operator--();
	return copy;
}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed::Fixed(const int init)
{
	value = init << bits;
}

Fixed::Fixed(const float init)
{
	value = roundf(init * (1 << bits));
}

Fixed::~Fixed()
{
}