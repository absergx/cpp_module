//
// Created by Meldred Emilio on 11/27/20.
//

#ifndef CPP08_TMP_MUTANTSTACK_HPP
#define CPP08_TMP_MUTANTSTACK_HPP

#include <stack>
#include <string>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {};
	virtual ~MutantStack() {};
	MutantStack(const MutantStack &other) : std::stack<T>(other) {};
	MutantStack&	operator=(const MutantStack &other) {
		*this = other;
		return *this;
	}
class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
private:
		T*		_pointer;
public:
		iterator() : _pointer(nullptr) {};
		iterator(T *pointer) : _pointer(pointer) {};
		iterator(MutantStack<T>::iterator const &iterator) { *this = iterator;};
		~iterator() {};
		MutantStack<T>::iterator&	operator=(const MutantStack<T>::iterator& other) {
			if (this != &other)
				this->_pointer = other._pointer;
			return *this;
		}
		bool	operator==(MutantStack<T>::iterator const &other) {return this->_pointer == other._pointer;};
		bool	operator!=(MutantStack<T>::iterator const &other) {return this->_pointer != other._pointer;};
		MutantStack<T>::iterator&	operator++() {
			this->_pointer -= 1;
			return *this;
		}
		MutantStack<T>::iterator	operator++(int) {
			MutantStack<T>::iterator tmp = *this;
			this->operator++();
			return tmp;
		}
		MutantStack<T>::iterator&	operator--() {
			this->_pointer += 1;
			return *this;
		}
		MutantStack<T>::iterator	operator--(int) {
			MutantStack<T>::iterator tmp = *this;
			this->operator--();
			return tmp;
		}
		T&	operator*() {return *(this->_pointer);};
	};
	MutantStack<T>::iterator	begin() {return iterator(&this->top());}
	MutantStack<T>::iterator	end() {return iterator(&this->top() - this->size());};
};

#endif //CPP08_TMP_MUTANTSTACK_HPP
