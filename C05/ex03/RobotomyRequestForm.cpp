#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target){
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : AForm(obj) {
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSign() == true && executor.getGrade() <= this->getGradeSign()
		&& this->getGradeSign() <= 72 && this->getGradeEx() <= 45)
	{
		if (std::rand() % 2 == 0)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->target << " has been robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowException();
}