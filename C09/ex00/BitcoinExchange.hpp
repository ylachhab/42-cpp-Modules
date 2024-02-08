#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <string>

class BitcoinExchange {
	private :
		std::string _fileName;
		std::map<std::string, float> _data;
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& obj);
		BitcoinExchange(std::string& filename);
		BitcoinExchange& operator=(const BitcoinExchange& obj);
		~BitcoinExchange();
};

void checkForma(std::ifstream &source, std::string &filename);
int checkMonth(std::string &month, int &d);
bool checkYear(int year);
void comparisonValue(std::string &year, std::string &month, std::string &day,
			std::string &value, std::map<std::string, float> _data, std::string &data);

#endif