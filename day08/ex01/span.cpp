#include "span.hpp"

span::span() : _len(0)
{
}

span::span(const unsigned int N) : _len(N)
{
}

span::span(const span &other)
{
	*this = other;
}

span::~span()
{

}

void span::addNumber(int value)
{
	if (values.size() == _len)
		throw dontHaveSpace();
	values.push_back(value);
}

int span::getLen() const
{
	return _len;
}

void span::randAddNumber(unsigned int nbr)
{
	srand(time(0));

	for (unsigned int i = 0; i < nbr; i++)
		addNumber(rand());
}

const std::vector<int> &span::getValues() const
{
	return values;
}

span &span::operator=(const span &other)
{
	if (this == &other)
		return *this;
	this->_len = other.getLen();
	this->values = other.values;
	return *this;
}

int span::shortestSpan()
{
	if (getLen() <= 1)
		throw spanSize();

	int record = 0;

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
		for (std::vector<int>::iterator it2 = values.begin(); it2 != values.end(); it2++)
			if ((abs(*it - *it2) < record || !record) && *it != *it2)
				record = abs(*it - *it2);
	return record;
}

int span::longestSpan()
{
	if (getLen() <= 1)
		throw spanSize();

	return *std::max_element(values.begin(), values.end()) - *std::min_element(values.begin(), values.end());
}

std::ostream &operator<<(std::ostream &os, span &other)
{
	for (int i = 0; i < other.getLen(); i++)
		os << other.getValues()[i];
	return os;
}