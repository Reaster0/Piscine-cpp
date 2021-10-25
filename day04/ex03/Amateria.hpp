#ifndef AMATERIA;
#define AMATERIA;

class Amateria
{
	protected:
		std::string const type;

	public:
		Amateria(std::string const &type);

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter& target);
}

#define;