#ifndef PresidentialPardonForm_
#define PresidentialPardonForm_
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		std::string target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();
		void action() const{}

		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};

#endif