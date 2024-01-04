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
		s = t.makeForm("shrubbery crelation", "Bender");
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
		Bureaucrat obj;
		RobotomyRequestForm s("robotomy");
		s.beSigned(obj);
		s.execute(obj);
		obj.executeForm(s);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try 
	{
		Bureaucrat obj;
		PresidentialPardonForm s("president");
		s.beSigned(obj);
		s.execute(obj);
		obj.executeForm(s);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}