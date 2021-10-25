#ifndef ANIMAL
#define ANIMAL
#include <iostream>

class Animal
{
	public:
		Animal(Animal const &other);
		Animal();
		virtual ~Animal();
		Animal& operator=(Animal const &other);

		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string type;
};

#endif