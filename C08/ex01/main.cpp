#include "Span.hpp"

int main()
{
	// Span sp1 = Span(10000);
	// for (int i = 0; i < 10000; i++)
	// 	sp1.addNumber(i + 1);
	// for (int i = 0; i < 10000; i++)
	// 	std::cout << sp1.getNbr(i) << " ";
	// std::cout << std::endl;
	Span sp = Span(5);
	sp.addNumber(10);
	sp.addNumber(98);
	sp.addNumber(8);
	sp.addNumber(-2);
	sp.addNumber(2);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "Vector befor the change\n";
	for (int i = 0; i < 5; i++)
		std::cout << sp.getNbr(i) << " ";
	std::cout << std::endl;

	std::vector<int> arr;
	arr.push_back(2);
	arr.push_back(5);
	arr.push_back(9);
	arr.push_back(-1);
	arr.push_back(3);
	arr.push_back(10);
	std::vector<int>::iterator begin = arr.begin();
	std::vector<int>::iterator end = arr.begin() + 5;
	sp.addNbrToSpan(begin, end);
	std::cout << "Vector after the change\n";
	for (int i = 0; i < 10; i++)
		std::cout << sp.getNbr(i) << " ";
	std::cout << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}