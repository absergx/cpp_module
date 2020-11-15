/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:20:35 by memilio           #+#    #+#             */
/*   Updated: 2020/11/14 15:45:00 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

			Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

			Fixed::Fixed(const int num) {
	this->fixedValue = num * (1 << Fixed::numberOfFractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

			Fixed::Fixed(const float num) {
	this->fixedValue = (int)roundf(num * (1 << Fixed::numberOfFractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

			Fixed::Fixed(const Fixed &num) {
	*this = num;
	std::cout << "Copy constructor called" << std::endl;
}

			Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float		Fixed::toFloat() const {
	return (float)this->fixedValue / (1 << Fixed::numberOfFractionalBits);
}

int				Fixed::toInt() const {
	return this->fixedValue / (1 << Fixed::numberOfFractionalBits);
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixedValue;
}

void		Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixedValue = raw;
}

Fixed		&Fixed::operator=(const Fixed &num) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &num)
		fixedValue = num.fixedValue;
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}
