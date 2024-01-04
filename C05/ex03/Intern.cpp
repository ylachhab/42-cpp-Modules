#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern& obj) {
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
	(void)obj;
	return (*this);
}

Intern::~Intern() {

}

AForm* Intern::makeForm(std::string name, std::string target) {
	int id;
	AForm* ret;

	id = -1;
	ret = NULL;
	name == "shrubbery creation" && (id = 0);
	name == "robotomy request" && (id = 1);
	name == "presidential pardon" && (id = 2);
	switch (id)
	{
	case 0:
		ret = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << name << std::endl;
		break;
	case 1:
		ret = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << name << std::endl;
		break;
	case 2:
		ret = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << name << std::endl;
		break;
	default:
		std::cout << "This name " << name << " is unvailable" << std::endl;
		break;
	}
	return ret;
}