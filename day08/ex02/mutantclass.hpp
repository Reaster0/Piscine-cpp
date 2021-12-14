#ifndef mutantclass
#define mutantclass
#include <iostream>
#include <stack>
#include <list>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		MutantStack(const MutantStack &other) {*this = other;};
		~MutantStack() {};
		MutantStack &operator=(const MutantStack &other) {this->c = other.c; return *this;};
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return this->c.begin();};
		iterator end() {return this->c.end();};
};

#endif