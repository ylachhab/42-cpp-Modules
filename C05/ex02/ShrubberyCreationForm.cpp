#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) {
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) {
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getSign() == true && executor.getGrade() <= this->getGradeSign()
		&& this->getGradeSign() <= 145 && this->getGradeEx() <= 137)
	{
		std::ofstream file(target + "_shrubbery");
		if (file.is_open())
		{
			file << "       _-_\n"
					"     /~~   ~~\\n"
					"  /~~         ~~\\n"
					" {               }\n"
					"  \  _-     -_  /\n"
					"    ~  \\ //  ~\n"
					" _- -   | | _- _\n"
					"   _ -  | |   -_\n"
					"       // \\\n" << std::endl;
			file.close();
		}
		else
		{
			file.close();
			std::cout << "Error in file" << std::endl;
			std::exit(1);
		}
	}
	else
		throw GradeTooLowException();
}