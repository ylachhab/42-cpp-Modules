#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>
#include <time.h>

class PmergeMe {
	private :
		int	tmp;
		std::vector<int>vec;
		std::vector<int>joh;
		std::vector< std::pair< int, int> > p;
		std::vector<int> main;
		std::vector<int> pend;
	public :
		PmergeMe();
		PmergeMe(const PmergeMe& obj);
		PmergeMe(char* av[]);
		PmergeMe& operator=(const PmergeMe& obj);
		~PmergeMe();
};

#endif