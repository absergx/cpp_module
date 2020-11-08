/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:59:42 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 18:07:59 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	this->weight = std::rand();
}

Brain::~Brain() {
	return ;
}

std::string	Brain::identify() {
	std::string	addr;
	addr = std::to_string(this);
}
