#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
	T c;
	c = a;
	a = b;
	b = c;
	std::cout << "sf ghayerha\n";
}

template <typename T> T min(T a, T b)
{
	if (a >= b)
		return b;
	return a;
}

template <typename T> T max(T a, T b)
{
	if (a <= b)
		return b;
	return a;
}

#endif