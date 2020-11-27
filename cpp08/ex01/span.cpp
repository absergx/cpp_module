//
// Created by Meldred Emilio on 11/27/20.
//

#include "span.hpp"
#include <limits>

Span::Span(unsigned int size) : _size(size) {}

Span::Span(const Span &other) : _arr(other._arr), _size(other._size) {}

Span::~Span() {}

Span & Span::operator=(const Span &other) {
	this->_size = other._size;
	this->_arr = other._arr;
	return *this;
}

const char * Span::TooFewElementsException::what() const throw() {
	return "Span: Too few elements";
}

const char * Span::MaxNumbersStoredException::what() const throw() {
	return "Span: Max number of numbers is already stored";
}

void Span::addNumber(int num) {
	if (this->_arr.size() == this->_size)
		throw MaxNumbersStoredException();
	this->_arr.push_back(num);
	std::sort(_arr.begin(), _arr.end());
}

int Span::longestSpan() const {
	if (this->_arr.empty() || this->_arr.size() == 1)
		throw TooFewElementsException();
	return this->_arr.back() - this->_arr.front();
}

int Span::shortestSpan() const {
	if (this->_arr.empty() || this->_arr.size() == 1)
		throw TooFewElementsException();
	int range = INT_MAX;
	for (unsigned long i = 0; i < this->_arr.size() - 1; i++) {
		int diff = this->_arr[i + 1] - this->_arr[i];
		range = range > diff ? diff : range;
	}
	return range;
}
