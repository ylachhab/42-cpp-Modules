#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
	private :
		T *str;
		int len;
	public :
		Array(){
			len = 5;
			str = new T[5];
			for (int i = 0; i < 5; i++)
				str[i] = NULL;
		};
		Array(unsigned int n) {
			this->len = n;
			str = new T[len];
		};
		Array(const Array& obj){
			str = new T[obj.len];
			for (int i = 0; i < obj.len; i++)
				str[i] = obj.str[i];
		};
		Array& operator=(const Array& obj){
			if (str)
				delete []str;
			str = new T[obj.len];
			for (int i = 0; i < obj.len; i++)
				str[i] = obj.str[i];
			return *this;
		};
		T& operator[](int ind){
			if (ind > len || ind < 0)
				throw std::exception();
			return str[ind];
		};
		void operator[](int ind) const{
			if (ind > len || ind < 0)
				throw std::exception();
		};
		int size() const{
			return this->len;
		};
};

#endif