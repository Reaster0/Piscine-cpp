#ifndef ShrubberyCreationForm_
#define ShrubberyCreationForm_
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();
		void action() const;


		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
};

#endif