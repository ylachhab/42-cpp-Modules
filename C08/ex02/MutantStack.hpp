#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public :
		MutantStack() {};
		MutantStack(const MutantStack& obj) : std::stack<T>(obj) {
			*this = obj;
		}
		MutantStack& operator=(const MutantStack& obj) {
			std::stack<T>::operator=(obj);
			return *this;
		}
		~MutantStack() {};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return std::stack<T>::c.begin();
		};
		iterator end() {
			return std::stack<T>::c.end();
		};
		const iterator begin() const {
			return std::stack<T>::c.begin();
		};
		const iterator end() const {
			return std::stack<T>::c.end();
		};
};

#endif