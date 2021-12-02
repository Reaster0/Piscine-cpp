#ifndef Intern_
#define Intern_
#include "Form.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &other);
		~Intern();
		Form *NewShrubbery(std::string destination);
		Form *NewRobotomy(std::string destination);
		Form *NewPresident(std::string destination);
		Form *MakeForm(std::string FormName, std::string destination);

		Intern &operator=(const Intern &other);
};

#endif