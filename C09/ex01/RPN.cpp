#include "RPN.hpp"

RPN::RPN() {

}

RPN::RPN(const RPN& obj) {
	*this = obj;
}

RPN& RPN::operator=(const RPN& obj) {
	(void)obj;
	return *this;
}

RPN::~RPN() {
	
}

int isNumber(std::string str)
{
	for (size_t j = 0; j < str.length(); j++)
	{
		if (!isdigit(str[j]))
			return (1);
	}
	return (0);
}

int foundOperator(char c) {
	if (c == '+'|| c == '-'|| c == '*'|| c == '/')
		return 1;
	return 0;
}

void printError(std::string str) {
	std::cout << str << std::endl;
	std::exit(1);
}

int operation(int a, int b, char op){
	if(op == '+')
		return b+a;
	else if(op == '-')
		return b-a;
	else if(op == '/')
	{
		if(a == 0)
			printError("Error invalid operation");
		return b/a;
	}
	return b*a;
}

RPN::RPN(std::string& input) {
	std::stringstream ss(input);
	std::string nbr;
	while (std::getline(ss, nbr, ' '))
	{
		if (!foundOperator(nbr[0]))
		{
			if (isNumber(nbr))
				printError("Error number is not integer");
			std::stringstream sn;
			int value; 
			sn << nbr;
			sn >> value;
			if (value < 0 || value > 9)
				printError("Error number is not in range");
			this->stack.push(value);
		}
		else if (nbr.length() == 1)
		{
			if (stack.size() < 2 || stack.empty())
				printError("Error +++");
			int a = stack.top();
			stack.pop();
			int b = stack.top();
			stack.pop();
			stack.push(operation(a, b, nbr[0]));
		}
		else
			printError("Error this isn't a valid");
	}
	if (stack.empty() || stack.size() != 1)
			printError("Error ---");
	std::cout << stack.top() << std::endl;
	stack.pop();
}
