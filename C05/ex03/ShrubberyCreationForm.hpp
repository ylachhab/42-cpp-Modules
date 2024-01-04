#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	private :
		std::string target;
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
		~ShrubberyCreationForm();
		void  execute(Bureaucrat const & executor) const;
};

#endif