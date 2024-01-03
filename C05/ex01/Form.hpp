#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	private :
		const std::string name;
		const int  gradeEx;
		const int  gradeSign;
		bool sign;
	public :
		Form();
		Form(const Form& obj);
		Form(const std::string &name, int gradeEx, int gradeSign);
		Form& operator=(const Form& obj);
		~Form();
		class GradeTooHighException;
		class GradeTooLowException;
		const std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeEx() const;
		void beSigned(Bureaucrat& obj);
};

class Form::GradeTooHighException : public std::exception {
	public :
		GradeTooHighException();
		const char* what() const throw() ;
};

class Form::GradeTooLowException : public std::exception {
	public :
		GradeTooLowException();
		const char* what() const throw() ;
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif