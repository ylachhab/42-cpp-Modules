#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
	private :
		std::vector<int> vec;
		unsigned int N;
	public :
		Span();
		Span(unsigned int N);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
		void addNumber(int nbr);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addNbrToSpan(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
		int getNbr(int i) const;
};

#endif