/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:48:20 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 17:05:26 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

		HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

		HumanA::~HumanA() {}

void	HumanA::attack() {
	std::cout << this->name << " attacks with his "
		<< this->weapon.getType() << std::endl;
}
