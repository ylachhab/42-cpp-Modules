#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <string>

class RPN {
	private :
		std::stack<int>stack;
	public :
		RPN();
		RPN(const RPN& obj);
		RPN(std::string& input);
		RPN& operator=(const RPN& obj);
		~RPN();
};

#endif