#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class AForm {
	private :
		const std::string name;
		const int  gradeEx;
		const int  gradeSign;
		bool sign;
	public :
		AForm();
		AForm(const AForm& obj);
		AForm(const std::string &name, int gradeEx, int gradeSign);
		AForm& operator=(const AForm& obj);
		~AForm();
		class GradeTooHighException;
		class GradeTooLowException;
		const std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeEx() const;
		void beSigned(Bureaucrat& obj);
		virtual void execute(Bureaucrat const & executor) const = 0;
};

class AForm::GradeTooHighException : public std::exception {
	public :
		GradeTooHighException();
		const char* what() const throw() ;
};

class AForm::GradeTooLowException : public std::exception {
	public :
		GradeTooLowException();
		const char* what() const throw() ;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif