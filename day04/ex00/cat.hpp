#ifndef CAT
#define CAT
#include "animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat& operator=(const Cat &other);

		void makeSound() const;
};

#endif