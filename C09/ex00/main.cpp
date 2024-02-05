#include "BitcoinExchange.hpp"

bool checkFile(std::string filename)
{
	std::ifstream file(filename);
	return (file.good());
}

int main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 0;
	}
	std::string file = av[1];
	if (checkFile(file) == false)
	{
		std::cout << "File does not exist" << std::endl;
		return (0);
	}
	BitcoinExchange a(file);
}