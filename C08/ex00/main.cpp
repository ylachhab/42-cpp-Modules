#include "easyfind.hpp"
#include <array>
#include <vector>
#include <iterator>

int main() {
	try {
		std::vector<int> vec;
		for (int i = 0; i < 4; i++)
			vec.push_back(i);
		std::vector<int>::iterator it;
		it = easyfind(vec, 12);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}
}