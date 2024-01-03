#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) {
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj) {
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getSign() == true && executor.getGrade() <= this->getGradeSign()
		&& this->getGradeSign() <= 25 && this->getGradeEx() <= 5)
	{
		std::cout << this->target << " has been pardoned by Zaphop Beeblebrox" << std::endl;
	}
	else
		throw GradeTooLowException();
}