#include "AForm.hpp"

AForm::AForm() : name("Default"), gradeEx(5), gradeSign(2), sign(false) {
}

AForm::AForm(const AForm& obj) : name(obj.name), gradeEx(obj.gradeEx),
			gradeSign(obj.gradeSign), sign(obj.sign) {
	*this = obj;
}

AForm& AForm::operator=(const AForm& obj) {
	(void)obj;
	return *this;
}

AForm::AForm(const std::string &name, int gradeEx, int gradeSign) : name(name), gradeEx(gradeEx), gradeSign(gradeSign), sign(false) {
	if (gradeEx < 1 || gradeSign < 1)
		throw GradeTooHighException();
	if (gradeEx > 150 || gradeSign > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {

}

AForm::GradeTooHighException::GradeTooHighException() {
	std::cout << "Default constructor GradeTooHighException called in AForm" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("This grade is too hight. Please enter grade in this range (1-150)");
}

AForm::GradeTooLowException::GradeTooLowException() {
	std::cout << "Default constructor GradeTooLowException called in AForm" << std::endl;
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("This grade is too low. Please enter grade in this range (1-150)");
}

const std::string AForm::getName() const {
	return this->name;
}

bool AForm::getSign() const {
	return this->sign;
}

int AForm::getGradeSign() const {
	return this->gradeSign;
}

int AForm::getGradeEx() const {
	return this->gradeEx;
}

std::ostream& operator<<(std::ostream& os, const AForm& obj) {
	os << obj.getName() << ", AForm grade sign " << obj.getGradeSign() << ", grade execute " 
	<< obj.getGradeEx() << ", signe " << obj.getSign();
	return os;
}

void AForm::beSigned(Bureaucrat& obj) {
	if (obj.getGrade() <= this->gradeSign)
		this->sign = true;
	else
		throw GradeTooLowException();
}