#ifndef _FIXED_
#define _FIXED_
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed(const int init);
		Fixed(const float init);
		~Fixed();

		int toInt() const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &other);

	private:
		int value;
		static const int bits = 8;
};
	std::ostream &operator<<(std::ostream &os, const Fixed &other);

#endif