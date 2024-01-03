#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :name("Default") {
	grade = 10;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name(obj.name) {
	*this = obj;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	if (this != &obj)
		this->grade = obj.grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){

}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "Default constructor GradeTooHighException called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return("This grade is too hight. Please enter grade in this range (1-150)");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	std::cout << "Default constructor GradeTooLowException called" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("This grade is too low. Please enter grade in this range (1-150)");
}

void Bureaucrat::incrementGrade() {
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade() {
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::signForm(AForm& obj) {
	try {
		if (obj.getSign() == false)
			obj.beSigned(*this);
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << obj.getName() 
		<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " didn't execute " << form.getName()
		<< " because the grade is too low" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}