#include "Form.hpp"

Form::Form() : name("Default"), gradeEx(100), gradeSign(15), sign(false) {
}

Form::Form(const Form& obj) : name(obj.name), gradeEx(obj.gradeEx),
			gradeSign(obj.gradeSign), sign(obj.sign) {
}

Form& Form::operator=(const Form& obj) {
	if (this != &obj)
		this->sign = obj.sign;
	return *this;
}

Form::Form(const std::string &name, int gradeEx, int gradeSign) : name(name), gradeEx(gradeEx), gradeSign(gradeSign), sign(false) {
	if (gradeEx < 1 || gradeSign < 1)
		throw GradeTooHighException();
	if (gradeEx > 150 || gradeSign > 150)
		throw GradeTooLowException();
}

Form::~Form() {

}

Form::GradeTooHighException::GradeTooHighException() {
	std::cout << "Default constructor GradeTooHighException called in Form" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("This grade is too hight. Please enter grade in this range (1-150)");
}

Form::GradeTooLowException::GradeTooLowException() {
	std::cout << "Default constructor GradeTooLowException called in Form" << std::endl;
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("This grade is too low. Please enter grade in this range (1-150)");
}

const std::string Form::getName() const {
	return this->name;
}

bool Form::getSign() const {
	return this->sign;
}

int Form::getGradeSign() const {
	return this->gradeSign;
}

int Form::getGradeEx() const {
	return this->gradeEx;
}

std::ostream& operator<<(std::ostream& os, const Form& obj) {
	os << obj.getName() << ", Form grade sign " << obj.getGradeSign() << ", grade execute " 
	<< obj.getGradeEx() << ", signe " << obj.getSign();
	return os;
}

void Form::beSigned(Bureaucrat& obj) {
	if (obj.getGrade() <= this->gradeSign)
		this->sign = true;
	else
		throw GradeTooLowException();
}