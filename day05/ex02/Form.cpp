#include "Form.hpp"

Form::Form(): name("default"), signature(false), gradeToSign(150), gradeToExecute(150)
{

}

Form::Form(const Form &other): name(other.name), signature(other.signature), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
}

Form::Form(std::string const NameGiven, int const gradeSign, int const gradeExecute): name(NameGiven), signature(false), gradeToSign(gradeSign), gradeToExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form &Form::operator=(const Form &other)
{
	signature = other.signature;
	return *this;
}

void Form::beSigned(Bureaucrat const &other)
{
	if (other.getGrade() > gradeToSign)
		throw Form::GradeTooLowException();
	signature = true;
}

std::string Form::getName() const
{
	return name;
}

int Form::getGradeSign() const
{
	return gradeToSign;
}

int Form::getGradeExec() const
{
	return gradeToExecute;
}

bool Form::getSigned() const
{
	return signature;
}

std::ostream &operator<<(std::ostream &os, Form const &other)
{
	return os << other.getName() << ", form, gradeToSign = " << other.getGradeSign() << ", gradeToExec = " << other.getGradeExec() << ", signature = " << other.getSigned();
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > gradeToExecute)
		throw Form::GradeTooLowException();
	if (!signature)
		throw Form::FormNotSignedException();
	action();
}