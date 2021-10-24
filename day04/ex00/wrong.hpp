#ifndef WRONG
#define WRONG
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(WrongAnimal const &other);
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal& operator=(WrongAnimal const &other);

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};


class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &other);
		~WrongCat();
		WrongCat& operator=(const WrongCat &other);

		void makeSound() const;
};

#endif