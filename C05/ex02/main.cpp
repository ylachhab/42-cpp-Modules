#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try 
	{
		Bureaucrat obj;
		ShrubberyCreationForm s("shrubbery");
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