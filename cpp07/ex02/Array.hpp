//
// Created by Meldred Emilio on 11/26/20.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array {
private:
	unsigned int _size;
	T			*_arr;
public:
	Array() : _size(0), _arr(nullptr) {}
	Array(unsigned int size) : _size(size), _arr(nullptr) {
		this->_arr = new T[this->_size]();
	}
	Array(const Array<T> &other) : _size(0), _arr(nullptr) {
		if (!other._size)
			return ;
		this->_arr = new T[other._size]();
		this->_size = other._size;
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = other._arr[i];
	}
	~Array() {
		if (this->_size)
			delete [] this->_arr;
	}
	Array<T>&		operator=(Array const &other) {
		if (this->_arr)
			delete [] this->_arr;
		if (other._size) {
			this->_arr = new T[other._size]();
			for (unsigned int i = 0; i < other._size; i++)
				this->_arr[i] = other._arr[i];
		} else
			this->_arr = nullptr;
		this->_size = other._size;
		return *this;
	}
	class OutOfTheLimitsException: public std::exception {
		virtual const char* what() const throw() {
			return "Array: This element is out of the limits";
		}
	};
	T&				operator[](unsigned int index) {
		if (index >= this->_size)
			throw OutOfTheLimitsException();
		return this->_arr[index];
	}
	unsigned int size() const {return this->_size;}
};

#endif //CPP07_ARRAY_HPP
