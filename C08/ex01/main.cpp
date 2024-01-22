#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	for (int i = 0; i < 5; i++)
		sp.addNumber(i + 1);
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
	arr.push_back(0);
	arr.push_back(3);
	arr.push_back(10);
	std::vector<int>::iterator begin = arr.begin() + 2;
	std::vector<int>::iterator end = arr.begin() + 5;
	sp.addNbrToSpan(begin, end);
	std::cout << "Vector after the change\n";
	for (int i = 0; i < 8; i++)
		std::cout << sp.getNbr(i) << " ";
	std::cout << std::endl;
	return 0;
}