#ifndef CHARACTER
#define CHARACTER
#include "Icharacter.hpp"

class Character : public ICharacter
{

	private:
		std::string name;
		AMateria *listMateria[4];

	public:
		Character(std::string const NameGiven);
		Character();
		Character(const Character &other);
		~Character();

		Character &operator=(const Character &other);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif