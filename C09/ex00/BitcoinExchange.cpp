#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {
	*this = obj;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj) {
	if (this != &obj)
	{
		_data = obj._data;
		_fileName = obj._fileName;
	}
	return *this;
}

void fillMap(std::map<std::string, float> &_data) {
	std::string file = "data.csv";
	std::ifstream source(file);
	std::string content;
	while (std::getline(source, content))
	{
		std::stringstream ss(content);
		std::string key;
		std::string value;
		std::getline(ss, key, ',');
		std::getline(ss, value, ',');
		std::stringstream ss1;
		float nbr;
		ss1 << value;
		ss1 >> nbr;
		_data[key] = nbr;
	}
	source.close();
}

bool checkWhiteSpace(std::string tmp)
{
	tmp.erase(std::remove(tmp.begin(), tmp.end(), ' '), tmp.end());
	tmp.erase(std::remove(tmp.begin(), tmp.end(), '\t'), tmp.end());
	if (tmp.empty() || tmp == "\n")
		return (true);
	return (false);
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

std::string trim(std::string& input) {
	std::string::size_type start = 0;
	while (start < input.length() && std::isspace(input[start]))
		++start;
	std::string::size_type end = input.length() - 1;
	while (end > start && std::isspace(input[end]))
		--end;
	return input.substr(start, end - start + 1);
}

int countPipe(std::string str) {
	int count = 0;
	for (size_t i = 0;i < str.length(); i++)
	{
		if (str[i] == '|')
			count++;
	}
	return (count);
}

void checkForma(std::ifstream &source, std::string &filename) {
	std::ifstream file(filename.c_str(), std::ios::ate);
	if (file.tellg() == std::ifstream::pos_type(0) || !source.is_open())
	{
		std::cout << "Error file is empty\n";
		std::exit (1);
	}
	std::string content;
	std::getline(source, content);
	if (content != "date | value")
	{
		std::cout << "Error this file must begin with \"date | value\"" << std::endl;
		std::exit(1);
	}
}

int checkMonth(std::string &month, int &d){
	std::string str[] = {"04", "06", "08", "09", "11"};
	size_t arraySize = sizeof(str) / sizeof(str[0]);
	for (size_t i = 0; i < arraySize; i++)
	{
		size_t found = str[i].find(month);
		if (found != std::string::npos && d > 30)
			return 1;
	}
	return 0;
}

bool checkYear(int year)
{
	if (year % 400 == 0) {
		return true;
	}
	else if (year % 100 == 0) {
		return false;
	}
	else if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void comparisonValue(std::string &year, std::string &month, std::string &day,
			std::string &value, std::map<std::string, float> _data, std::string &data) {
	value = value.substr(1, value.length() - 1);
	double v;
	char *l;
	v = strtod(value.c_str(), &l);
	if (v < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (v > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else if (l[0] != '\0' || v != v || ((value[0] < '0' || value[0] > '9') && value[0] != '.'))
		std::cout << "Error: bad input => " << value << std::endl;
	else
	{
		std::stringstream sy(year), sm(month), sd(day);
		int y, m, d;
		sy >> y;
		sm >> m;
		sd >> d;
		if (checkMonth(month, d))
			std::cout << "Error: bad data => " << data << std::endl;
		if ((month == "02" && d > 29) || (!checkYear(y) && d == 29))
			std::cout << "Error: bad data year isn't Leap Year => " << data << std::endl;
		else if (y > INT_MAX || m > 12 || d > 31)
			std::cout << "Error: bad input => " << data << std::endl;
		else
		{
			data = data.substr(0, data.length() - 1);
			std::map<std::string, float>::iterator it = _data.find(data);
			if (data < _data.begin()->first)
				std::cout << "Error: bad input => " << data << std::endl;
			else if (it != _data.end())
				std::cout << data << " => "<< v << " = " << it->second * v << std::endl;
			else
			{
				it = _data.lower_bound(data);
				if (it->first != data && it != _data.begin())
					it--;
				std::cout << data << " => "<< v << " = " << it->second * v << std::endl;
			}
		}
	}
}

BitcoinExchange::BitcoinExchange(std::string& filename) {
	this->_fileName = filename;
	fillMap(this->_data);
	std::ifstream source(filename);
	checkForma(source, filename);
	std::string content;
	while (std::getline(source, content))
	{
		std::string data;
		std::string value;
		std::stringstream ss(content);
		std::getline(ss, data, '|');
		std::getline(ss, value, '|');
		if (value.empty() || data.empty())
			std::cout << "Error: bad input => " << data << std::endl;
		else if (value[0] != ' ' || ((content[content.length() - 1] < '0'
			|| content[content.length() - 1] > '9') && content[content.length() - 1] != '.'))
			std::cout << "Error: bad input => " << value << std::endl;
		else
		{
			int flag = std::count(data.begin(), data.end(), '-');
			if (flag != 2)
				std::cout << "Error: bad input => " << data << std::endl;
			else
			{
				std::string year;
				std::string month;
				std::string day;
				std::stringstream s(data);
				std::getline(s, year, '-');
				std::getline(s, month, '-');
				std::getline(s, day, '-');
				if (isNumber(year) || isNumber(month) || day.length() != 3 || month.length() != 2 || year.length() > 4)
					std::cout << "Error: bad input => " << data << std::endl;
				else
				{
					day = day.substr(0, day.length() - 1);
					if (isNumber(day))
						std::cout << "Error: bad input => " << data << std::endl;
					else
						comparisonValue(year, month, day, value, _data, data);
				}
			}
		}
	}
	source.close();
}

BitcoinExchange::~BitcoinExchange() {

}