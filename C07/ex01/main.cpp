#include "iter.hpp"

int main(){
	const std::string arr[] = {"hello", "hi", "world"};
	int len = sizeof(arr) / sizeof(std::string);
	iter(arr, len, print<const std::string>);

	int nbr[] = {0, 1, 2, 3, 4, 42, 42, 42, 42, 42};
	int l = sizeof(nbr) / sizeof(int);
	iter(nbr, l, print<int>);
}