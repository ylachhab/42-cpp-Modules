#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat obj2("nah", 55);
		std::cout << "name : " << obj2.getName() << ", grade : " << obj2.getGrade() << std::endl;
		obj2.incrementGrade();
		std::cout << "name : " << obj2.getName() << ", grade : " << obj2.getGrade() << std::endl;
		obj2.decrementGrade();
		std::cout << "name : " << obj2.getName() << ", grade : " << obj2.getGrade() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	try {
		Bureaucrat obj("name", 52);
		Form F("jesse", 40, 5);
		F.beSigned(obj);
		obj.signForm(F);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}