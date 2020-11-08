/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:09:39 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 13:41:24 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"	

		Zombie::Zombie(std::string name, std::string type) {
	this->zombieName = name;
	this->zombieType = type;
}

		Zombie::~Zombie() {
	return ;
}

void	Zombie::announce() {
	std::cout << this->zombieName << " " << this->zombieType << " Braiiiiiiinnnssss..." << std::endl;
}
