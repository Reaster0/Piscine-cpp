#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
}

Bureaucrat::Bureaucrat(std::string const _name, int const note) : name(_name), grade(note)
{
	try
	{
		if (grade > 150)
			throw 1;
		if (grade < 1)
			throw 2;
	}
	catch(const int& e)
	{
		grade = 150;
		if (e == 1)
			this->GradeTooHighException();
		if (e == 2)
			this->GradeTooLowException();
	}
	
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	grade = other.grade;
	return *this;
}

void Bureaucrat::GradeTooHighException()
{
	std::cout << "the grade is too high and should not be more thant 150" << std::endl;
}

void Bureaucrat::GradeTooLowException()
{
	std::cout << "the grade is too low and should not be less than 1" << std::endl;
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
	try
	{
		grade--;
		if (grade <= 0)
			throw "the grade can't under 1";
	}
	catch(const char *e)
	{
		grade = 1;
		std::cerr << e << '\n';
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		grade++;
		if (grade >= 150)
			throw "the grade can't be over 150";
	}
	catch(const char *e)
	{
		grade = 150;
		std::cerr << e << '\n';
	}
	
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &other)
{
	return os << other.getName() << ", bureaucrat, grade " << other.getGrade() << std::endl;
}