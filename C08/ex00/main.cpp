#include "easyfind.hpp"
#include <array>
#include <vector>
#include <iterator>

int main() {
	try {
		std::array<int , 4> arr1 = {1, 2, 5, 8};
		int *a = easyfind(arr1, 898);
		std::cout << a[0] << std::endl;
		std::cout << a[1] << std::endl;
		std::cout << a[2] << std::endl;
		std::cout << a[3] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}
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