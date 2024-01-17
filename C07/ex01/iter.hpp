#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename M> void iter(T *arr, int l, M f)
{
	for (int i = 0; i < l; i++)
		f(arr[i]);
}

template <typename M> void print(M a) {
	std::cout << a << std::endl;
}

#endif