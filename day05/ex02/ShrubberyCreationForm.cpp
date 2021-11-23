#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("ShrubberyCreationForm", 145, 137)
{
	target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137)
{
	target = (std::string)"default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): Form(other)
{
	target = other.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	target= other.target;
	return *this;
}

void ShrubberyCreationForm::action() const
{
	const char three[136] = "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";
	std::ofstream file(&(target + (std::string)"_shrubbery")[0]);
	if (!file)
		std::cout << "can't write to the file" << std::endl;
	file.write(three, sizeof(char) * 135);

}