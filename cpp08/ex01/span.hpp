//
// Created by Meldred Emilio on 11/27/20.
//

#ifndef CPP08_TMP_SPAN_HPP
#define CPP08_TMP_SPAN_HPP

#include <vector>
#include <iostream>

class Span {
private:
	std::vector<int>	_arr;
	unsigned int		_size;
public:
	Span(unsigned int size);
	Span(Span const &other);
	~Span();
	Span&	operator=(Span const &other);
	class TooFewElementsException: public std::exception {
		virtual const char* what() const throw();
	};
	class MaxNumbersStoredException: public std::exception {
		virtual const char* what() const throw();
	};
	void 	addNumber(int num);
	int		shortestSpan() const;
	int 	longestSpan() const;
};

#endif //CPP08_TMP_SPAN_HPP
