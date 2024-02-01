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
	//vector
	if (this != &obj)
		this->N = obj.N;
	return *this;
}

Span::~Span() {
	
}

void Span::addNumber(int nbr) {
	if (this->vec.size() == this->N)
		throw std::exception();
	this->vec.push_back(nbr);
}

unsigned int Span::shortestSpan(){
	if (this->vec.empty() || this->vec.size() == 1)
		throw std::exception();
	std::sort(this->vec.begin(), this->vec.end());
	int tmp = INT_MAX;
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
	std::sort(this->vec.begin(), this->vec.end());
	return (this->vec[vec.size() - 1] - this->vec[0]);
}

void Span::addNbrToSpan(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end){
	this->vec.insert(vec.end(), begin, end);
}

int Span::getNbr(int i) const{
	return vec[i];
}