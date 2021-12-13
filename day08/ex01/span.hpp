#ifndef _span_
#define _span_
#include <vector>
#include <iostream>
#include <algorithm>

class span
{
	private:
	 std::vector<int> values;
	 unsigned int _len;

	public:
		span();
		span(const unsigned int N);
		span(const span &other);
		~span();
		void addNumber(int value);
		int getLen() const;
		const std::vector<int> &getValues() const;
		int shortestSpan();
		int longestSpan();

		class dontHaveSpace: public std::exception
		{
			virtual const char *what() const throw() {return "there is not enough space";}
		};

		class spanSize: public std::exception
		{
			virtual const char *what() const throw() {return "error span: size incorect";}
		};
};

std::ostream &operator<<(std::ostream &os, span &other);

#endif