#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try 
	{
		Intern t;
		AForm *s;
		Bureaucrat obj;
		s = t.makeForm("shrubbery creation", "jon");
		if (!s)
			std::exit(1);
		s->beSigned(obj);
		s->execute(obj);
		obj.executeForm(*s);
		delete s;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Intern t;
		AForm *s;
		Bureaucrat obj;
		s = t.makeForm("robotomy request", "bob");
		if (!s)
			std::exit(1);
		s->beSigned(obj);
		s->execute(obj);
		obj.executeForm(*s);
		delete s;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Intern t;
		AForm *s;
		Bureaucrat obj;
		s = t.makeForm("presidential pardonb", "sara");
		if (!s)
			std::exit(1);
		s->beSigned(obj);
		s->execute(obj);
		obj.executeForm(*s);
		delete s;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}