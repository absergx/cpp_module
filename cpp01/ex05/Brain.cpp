/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:59:42 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 15:49:18 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain() {
	this->weight = std::rand();
}

Brain::~Brain() {
	return ;
}

std::string	Brain::identify() const {
	std::ostringstream	stream;
	std::string			addr;

	stream << this;
	addr = stream.str();
	return addr;
}
