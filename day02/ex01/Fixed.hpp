#ifndef _FIXED_
#define _FIXED_
#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);
		Fixed(const int init);
		Fixed(const float init);

		int toInt() const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &other);

	private:
		int value;
		static const int bits = 8;
};

#endif