#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target): Form("PresidentialPardonForm", 25, 5)
{
	target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
	target = (std::string)"default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): Form(other)
{
	target = other.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	Form::operator=(other);
	target = other.target;
	return *this;
}