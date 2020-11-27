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
class Iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
private:
		T*		_pointer;
public:
		Iterator() : _pointer(nullptr) {};
		Iterator(T *pointer) : _pointer(pointer) {};
		Iterator(MutantStack<T>::Iterator const &iterator) {*this = iterator;};
		~Iterator() {};
		MutantStack<T>::Iterator&	operator=(const MutantStack<T>::Iterator& other) {
			if (this != &other)
				this->_pointer = other._pointer;
			return *this;
		}
		// operator++
		// &operator++
		// operator--
		// &operator--
		T&	operator*() {return *(this->_pointer);};
	};
	MutantStack<T>::Iterator	begin() {return Iterator(&this->top());}
	MutantStack<T>::Iterator	end() {return Iterator(&this->top() - this->size());};
};

#endif //CPP08_TMP_MUTANTSTACK_HPP
