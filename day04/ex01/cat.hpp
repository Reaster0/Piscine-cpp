#ifndef CAT
#define CAT
#include "animal.hpp"
#include "brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &other);
		~Cat();
		Cat& operator=(const Cat &other);

		void makeSound() const;
		void change_ideas(std::string *ideas);
		void tell_ideas();

	private:
		Brain *_brain;
};

#endif