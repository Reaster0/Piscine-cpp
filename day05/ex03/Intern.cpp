#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

Form *Intern::NewShrubbery(std::string destination)
{
	return new ShrubberyCreationForm(destination);
}

Form *Intern::NewRobotomy(std::string destination)
{
	return new RobotomyRequestForm(destination);
}

Form *Intern::NewPresident(std::string destination)
{
	return new PresidentialPardonForm(destination);
}

Form *Intern::MakeForm(std::string FormName, std::string destination)
{
	Form *(Intern::*function[3])(std::string) = {&Intern::NewShrubbery, &Intern::NewRobotomy, &Intern::NewPresident};
	std::string FormAssets[3] = {"Shrubbery form", "Robotomy form", "Presidential form"};
	for (int i = 0; i < 3; i++)
		if (FormAssets[i] == FormName)
		{
			std::cout << "Intern create " << FormName << std::endl;
			return (this->*function[i])(destination);
		}
	std::cout << "Stagiaire error : unknow argument" << std::endl;
	return 0;
}