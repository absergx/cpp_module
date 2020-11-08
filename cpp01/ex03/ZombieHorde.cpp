/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:32:07 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 17:30:30 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int count) {
	this->zombieCount = count;
	this->horde = new Zombie[count];
}

ZombieHorde::~ZombieHorde() {
	std::cout << "Don’t you get it? We ARE The Walking Dead!" << std::endl;
	delete [] this->horde;
}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->zombieCount; i++) {
		this->horde[i].announce();
	}
}
