#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac == 1)
	{
		std::cout << "Error in the argument" << std::endl;
		return 1; 
	}
	PmergeMe obj(av);
	return 0;
}