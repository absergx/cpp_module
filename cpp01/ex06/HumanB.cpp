/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:01:05 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 17:04:39 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() {}

void	HumanB::attack() {
	std::cout << this->name << " attacks with his "
		<< this->weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}
