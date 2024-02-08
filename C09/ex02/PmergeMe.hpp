#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <utility>
#include <time.h>

class PmergeMe {
	private :
		static int a;
		static int b;
		int	tmp;
		std::vector<int>vec;
		std::vector< std::pair< int, int> > p;
		std::vector<int> main;
		std::vector<int> pend;

		int	d;
		std::deque<int>deq;
		std::deque< std::pair< int, int> > p_d;
		std::deque<int> main_d;
		std::deque<int> pend_d;
	public :
		PmergeMe();
		PmergeMe(const PmergeMe& obj);
		PmergeMe(char* av[]);
		PmergeMe& operator=(const PmergeMe& obj);
		~PmergeMe();

		void implementationWithVector();
		void makePairVector();
		void merge_sort(size_t b, size_t e);
		void merge(size_t b, size_t m, size_t e);
		void createMainPend();
		size_t JacobsthalNbr();
		void fordJohnsonAlg();

		void implementationWithDeque();
		void makePairDeque();
		void merge_sortDeque(size_t b, size_t e);
		void mergeDeque(size_t b, size_t m, size_t e);
		void createMainPendDeque();
		void fordJohnsonAlgDeque();
};

int isNumber(std::string str);
void printError(std::string str);

#endif