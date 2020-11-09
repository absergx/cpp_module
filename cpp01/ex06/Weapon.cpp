/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:32:22 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:57:53 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

					Weapon::Weapon(std::string type) : type(type) {}

					Weapon::~Weapon() {}

void				Weapon::setType(std::string type) {
	this->type = type;
}

std::string const&	Weapon::getType() {
	return this->type;
}
