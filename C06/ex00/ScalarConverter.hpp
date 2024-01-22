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
void changeToCharacter(double tmp, std::string input);
void changeToInteger(std::string str, double tmp, std::string input);
void print_double(double tmp);
int isPrintable(int nbr);
void changeToDouble(std::string str, double tmp, std::string input);
void print_float(double tmp);
void changeToFloat(std::string str, double tmp, std::string input);
#endif