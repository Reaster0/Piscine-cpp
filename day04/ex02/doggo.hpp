#ifndef DOGGO
#define DOGGO
#include "animal.hpp"
#include "brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &other);
		~Dog();
		Dog& operator=(const Dog &other);

		void makeSound() const;
		void change_ideas(std::string *ideas);
		void tell_ideas();

	private:
		Brain *_brain;
};

#endif