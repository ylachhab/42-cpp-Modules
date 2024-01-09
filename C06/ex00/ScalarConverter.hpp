#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <sstream>

class ScalarConverter {
	public :
		ScalarConverter();//private
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();
		static void convert(std::string str);
};
#endif