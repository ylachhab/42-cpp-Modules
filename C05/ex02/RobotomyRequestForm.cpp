#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 45, 72){
	 
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 45, 72){
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
	if (this->getSign() == true && executor.getGrade() <= this->getGradeEx())
	{
		std::srand(std::time(0));
		if (std::rand() % 2 == 0)
			std::cout << this->target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->target << " has been robotomy failed" << std::endl;
	}
	else
		throw GradeTooLowException();
}