#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :AForm("Shrubbery", 137, 145) {
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 137, 145){
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
	if (this->getSign() == true && executor.getGrade() <= this->getGradeEx())
	{
		std::ofstream file(target + "_shrubbery");
		if (file.is_open())
		{
			file << "        _-_\n"
				 << "     /~~   ~~\\ \n"
				 << "  /~~         ~~\\ \n"
				 << " {               }\n"
				 << "  \\  _-     -_  /\n"
				 << "    ~  \\ //  ~\n"
				 << " _- -   | | _- _\n"
				 << "   _ -  | |   -_\n"
				 << "       // \\\n"
				 << "__-__--     --__-__" << std::endl;
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