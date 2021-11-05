#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
}

Bureaucrat::Bureaucrat(std::string const _name, int const note) : name(_name), grade(note)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	grade = other.grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade - 1 <= 0)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
		if (grade + 1 > 150)
			throw GradeTooLowException();
		grade++;
}

void Bureaucrat::signForm(Form &other) const
{
	other.beSigned(*this);
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	return os << other.getName() << ", bureaucrat, grade " << other.getGrade();
}
