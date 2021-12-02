#ifndef BUREAUCRAT
#define BUREAUCRAT
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat(std::string const _name, int const note);

		Bureaucrat &operator=(const Bureaucrat &other);
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &other) const;
		void executeForm(Form const &form);

	class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return "the grade is too low and should not be less than 150"; }
		};

	class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw() { return "the grade is too high and should not be over 1"; }
		};
};

	std::ostream &operator<<(std::ostream &os, Bureaucrat const &other);

#endif