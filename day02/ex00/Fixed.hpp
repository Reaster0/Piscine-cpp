#ifndef _FIXED_
#define _FIXED_
#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &copy);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(const Fixed &other);

	private:
		int value;
		static const int bits = 8;
};

#endif