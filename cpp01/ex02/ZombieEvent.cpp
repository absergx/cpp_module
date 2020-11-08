/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:38:33 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 13:44:59 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string typeValues[4] = {
	"Homer",
	"Hawking",
	"Ninja",
	"T-800s"
};

			ZombieEvent::ZombieEvent() {
	this->zombieType = "Simple zombie";
}

			ZombieEvent::~ZombieEvent() {
	return ;
}

void		ZombieEvent::setZombieType() {
	std::srand(std::time(nullptr));
	this->zombieType = typeValues[std::rand() % 4];
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie* zombie = new Zombie(name, this->zombieType);
	return zombie;
}
