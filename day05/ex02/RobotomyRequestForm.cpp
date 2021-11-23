#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target): Form("RobotomyRequestForm", 72, 45)
{
	target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
	target = (std::string)"default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): Form(other)
{
	target = other.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}

void RobotomyRequestForm::action() const
{
	srand(time(0));
	std::cout << "brrrrr brrrrrrrrr" << std::endl;
	if (rand() % 2)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "the mission is a failure" << std::endl;
}