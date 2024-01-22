#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array {
	private :
		T *str;
		unsigned int len;
	public :
		Array(){
			len = 0;
			str = 0;
		};
		Array(unsigned int n) {
			this->len = n;
			str = new T[len];
			for (unsigned int i = 0; i < len; i++)
				str[i] = 0;
		};
		Array(const Array& obj){
			len = obj.len;
			str = new T[obj.len];
			for (unsigned int i = 0; i < obj.len; i++)
				str[i] = obj.str[i];
		};
		Array& operator=(const Array& obj){
			if (str)
				delete []str;
			len = obj.len;
			str = new T[obj.len];
			for (unsigned int i = 0; i < obj.len; i++)
				str[i] = obj.str[i];
			return *this;
		};
		T& operator[](unsigned int ind){
			if (ind >= len)
				throw std::exception();
			return str[ind];
		};
		const T& operator[](unsigned int ind) const{
			if (ind >= len)
				throw std::exception();
			return str[ind];
		};
		int size() const{
			return this->len;
		};
		~Array() {
			if (str)
				delete []str;
		}
};

#endif