/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:02:42 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 15:51:09 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

				Human::Human() {}

				Human::~Human() {}

std::string		Human::identify() const {
	return this->brain.identify();
}

Brain const&	Human::getBrain() {
	return this->brain;
}
