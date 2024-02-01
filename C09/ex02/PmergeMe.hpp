#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <string>

class PmergeMe {
	private :
		std::stack<int>stack;
	public :
		PmergeMe();
		PmergeMe(const PmergeMe& obj);
		PmergeMe(std::string& input);
		PmergeMe& operator=(const PmergeMe& obj);
		~PmergeMe();
};

#endif