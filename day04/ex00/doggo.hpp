#ifndef DOGGO
#define DOGGO
#include "animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog& operator=(const Dog &other);

		void makeSound() const;
};

#endif