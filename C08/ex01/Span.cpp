#include "Span.hpp"

Span::Span() {
	this->N = 10;
}

Span::Span(unsigned int N) {
	this->N = N;
}

Span::Span(const Span& obj) {
	*this = obj;
}

Span& Span::operator=(const Span& obj) {
	if (this != &obj)
		this->N = obj.N;
	return *this;
}

Span::~Span() {
	
}

void Span::addNumber(int nbr) {
	if (this->vec.size() == this->N)
		throw std::exception();
	if (this->vec.empty())
	{
		this->max = nbr;
		this->min = nbr;
	}
	if (this->max < nbr)
		this->max = nbr;
	if (this->min > nbr)
		this->min = nbr;
	this->vec.push_back(nbr);
}

unsigned int Span::shortestSpan(){
	if (this->vec.empty() || this->vec.size() == 1)
		throw std::exception();
	std::sort(this->vec.begin(), this->vec.end());
	int tmp = this->vec[0];
	if (this->vec[0] < 0)
		tmp *= -1;
	for (unsigned int i = 0; i < this->N - 1; i++)
	{
		if (this->vec[i + 1] - this->vec[i] < tmp)
			tmp = this->vec[i + 1] - this->vec[i];
	}
	return tmp;
}

unsigned int Span::longestSpan(){
	if (this->vec.empty() || this->vec.size() == 1)
		throw std::exception();
	return (this->max - this->min);
}