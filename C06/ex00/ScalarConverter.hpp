#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <sstream>

class ScalarConverter {
	private :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
	public :
		static void convert(std::string str);
};
#endif