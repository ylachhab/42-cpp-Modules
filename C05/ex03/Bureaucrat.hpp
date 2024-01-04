#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"
class AForm;

class Bureaucrat {
	private :
		const std::string	name;
		int			grade;
	public :
		Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();
		class GradeTooHighException;
		class GradeTooLowException;
		std::string getName() const;
		int	getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm& obj);
		void executeForm(AForm const & form);
};

class Bureaucrat::GradeTooHighException : public std::exception {
	public :
		GradeTooHighException();
		const char* what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {
	public :
		GradeTooLowException();
		const char* what() const throw();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif