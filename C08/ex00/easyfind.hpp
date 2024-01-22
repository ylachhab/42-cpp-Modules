#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include<iterator>

class InvalidValue  : public std::exception {
	public :
		const char* what() const throw() {
			return "This value isn't found";
		};
};

template <typename T>
typename T::iterator easyfind(T &str, int nbr) {
	typename T::iterator iter;

	iter = std::find(str.begin(), str.end(), nbr);
	if (iter == str.end())
		throw InvalidValue();
	return iter;
}

#endif