#include "ScalarConverter.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error in the argument\n";
		return 1;
	}
	std::string str = av[1];
	if (str.length() == 0)
		return (std::cout << "Empty argument\n", 1);
	ScalarConverter::convert(str);
	return (0);
}