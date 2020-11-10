/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:17:11 by memilio           #+#    #+#             */
/*   Updated: 2020/11/10 17:02:01 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

			Fixed::Fixed() : fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

			Fixed::Fixed(const Fixed &num) {
	*this = num;
	std::cout << "Copy constructor called" << std::endl;
}

			Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
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
		fixedValue = num.getRawBits();
	return *this;
}
