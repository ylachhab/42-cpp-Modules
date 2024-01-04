#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat obj1;
		std::cout << "name : " << obj1.getName() << ", grade : " << obj1.getGrade() << std::endl;
		obj1.incrementGrade();
		std::cout << "name : " << obj1.getName() << ", grade : " << obj1.getGrade() << std::endl;
		obj1.decrementGrade();
		std::cout << "name : " << obj1.getName() << ", grade : " << obj1.getGrade() << std::endl;
		std::cout << obj1 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------------" << std::endl;
	try {
		Bureaucrat obj2("nah", 2);
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
}