#ifndef _easyfind_
#define _easyfind_
#include <iostream>
#include <vector>

class dontFind : public std::exception
{
	public:
	virtual const char *what() const throw(){return "the value is not in the iterable";}

};

template<typename T>
int easyfind(T it, int value)
{
	typename T::iterator result = std::find(it.begin(), it.end(), value);
	if (*result != value)
		throw dontFind();
	//std::cout << "next value is " << *(result + 1) << std::endl; //decomment to see that it is the first one
	return *result;
}

#endif