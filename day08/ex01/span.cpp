#include "span.hpp"

span::span() : _len(0)
{
}

span::span(const unsigned int N) : _len(N)
{
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

const std::vector<int> &span::getValues() const
{
	return values;
}

int span::shortestSpan()
{
	if (getLen() <= 1)
		throw spanSize();

	int mini;
	int maxi;
	bool firstRun = true;
	for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
	{
		if (firstRun || *it < mini)
			mini = *it;
		firstRun = false;
	}
	firstRun = true;
	for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
	{
		if ((*it != mini && firstRun) || (*it < maxi && *it > mini))
			maxi = *it;
		firstRun = false;
	}
}

int span::longestSpan()
{
	if (getLen() <= 1)
		throw spanSize();

	bool firstRun = true;
	int mini;
	int maxi;
	for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
	{
		if (firstRun || *it > maxi)
			maxi = *it;
		firstRun = false;
	}
	for (std::vector<int>::iterator it = values.begin(); it != values.end(); ++it)
	{
		if ((*it != maxi && firstRun) || *it < mini)
			mini = *it;
		firstRun = false;
	}
	return (maxi - mini);
}

std::ostream &operator<<(std::ostream &os, span &other)
{
	for (int i = 0; i < other.getLen(); i++)
		os << other.getValues()[i];
	return os;
}