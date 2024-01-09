#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {

}

ScalarConverter::ScalarConverter(const ScalarConverter& obj) {
	(void)obj;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj) {
	(void)obj;
	return *this;
}

ScalarConverter::~ScalarConverter() {

}

int isPrintable(int nbr) {
	if (isprint(nbr))
		return (1);
	return 0;
}

void changeToCharacter(double tmp, std::string input) {
	if (((input.c_str()[0] != 'f' || input.c_str()[0] != '\0')
		&& input.c_str()[1] != '\0') || tmp != tmp)
		std::cout << "char: impossible" << std::endl;
	else if (tmp == 0 && isPrintable(input.c_str()[0]))
		std::cout << "char : '" << static_cast<char>(input.c_str()[0]) << "'" << std::endl;
	else if (tmp && isPrintable(tmp))
		std::cout << "char : " << static_cast<char>(tmp) << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
}

void changeToInteger(std::string str, double tmp, std::string input) {
	if (str.length() == 1 && !input.empty())
		std::cout << "int : " << static_cast<int>(str.c_str()[0]) << std::endl;
	else if (tmp < INT_MIN || tmp > INT_MAX || ((input.c_str()[0] != 'f' && input.c_str()[0] != '\0')
		|| input.c_str()[1] != '\0') || tmp != tmp)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(tmp) << std::endl;
}

void print_double(double tmp) {
	std::stringstream nbr;
	std::string a;
	nbr << tmp;
	nbr >> a;
	size_t found = 0;
	if (a == "inf" || a == "-inf" || a == "nan")
		std::cout << "double : " << a << std::endl;
	else if (a.find('.', found) != std::string::npos)
		std::cout << "double : " << static_cast<double>(tmp) << std::endl;
	else
		std::cout << "double : " << static_cast<double>(tmp) << ".0" << std::endl;
}

void changeToDouble(std::string str, double tmp, std::string input) {
	if (str.length() == 1 && !input.empty())
		print_double(input.c_str()[0]);
	else if (str == "nan" || str == "-inf" || str == "+inf")
		std::cout << "double : " << str << std::endl;
	else if ((input.c_str()[0] != 'f' && input.c_str()[0] != '\0')
		|| input.c_str()[1] != '\0')
		std::cout << "double : impossible" << std::endl;
	else if (tmp || tmp == 0)
		print_double(tmp);
}

void print_float(double tmp) {
	std::stringstream nbr;
	std::string a;
	nbr << tmp;
	nbr >> a;
	size_t found = 0;
	if (a == "inf" || a == "-inf" || a == "nan")
		std::cout << "float : " << a << "f" << std::endl;
	else if (a.find('.', found) != std::string::npos)
		std::cout << "float : " << static_cast<float>(tmp) << "f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(tmp) << ".0f" << std::endl;
}

void changeToFloat(std::string str, double tmp, std::string input) {
	if (str.length() == 1 && !input.empty())
		print_float(input.c_str()[0]);
	else if (str == "nanf" || str == "-inff" || str == "+inff")
		std::cout << "float : " << str << std::endl;
	else if ((input.c_str()[0] != 'f' && input.c_str()[0] != '\0') || input.c_str()[1] != '\0')
		std::cout << "float : impossible" << std::endl;
	else if (tmp || tmp == 0)
		print_float(tmp);
}

void ScalarConverter::convert(std::string str) {
	double tmp;
	char* end;

	tmp = strtod(str.c_str(), &end);
	std::string input = end;
	changeToCharacter(tmp, input);
	changeToInteger(str, tmp, input);
	changeToFloat(str, tmp, input);
	changeToDouble(str, tmp, input);
}