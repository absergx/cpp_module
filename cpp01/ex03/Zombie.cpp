/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:27:49 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 17:33:46 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

const std::string typeValues[4] = {
	"Homer",
	"Hawking",
	"Ninja",
	"T-800s"
};

const std::string nameValues[6] = {
	"Lewis Brian Hopkin Jones",
	"James Marshall Hendrix",
	"Janis Lyn Joplin",
	"James Douglas Morrison",
	"Kurt Donald Cobain",
	"Amy Jade Winehouse"
};

		Zombie::Zombie() {
	this->zombieName = nameValues[std::rand() % 6];
	this->zombieType = typeValues[std::rand() % 4];
}

		Zombie::~Zombie() {
	std::cout << "If I come back as a zombie I’m eating you first! ("
		<< this->zombieName << ")" << std::endl;
}

void	Zombie::announce() {
	std::cout << "<" << this->zombieName << " " << "(" << this->zombieType
		<< ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
