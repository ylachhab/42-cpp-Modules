#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain& B);
		Brain& operator=(const Brain& B);
		~Brain();
};

#endif