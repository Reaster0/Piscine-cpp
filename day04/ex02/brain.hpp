#ifndef BRAIN
#define BRAIN
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(Brain const &other);
		~Brain();
		Brain &operator=(const Brain &other);

		std::string ideas[100];
};

#endif