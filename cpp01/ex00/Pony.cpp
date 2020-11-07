/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:01:10 by memilio           #+#    #+#             */
/*   Updated: 2020/11/07 19:07:21 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Twilight Sparkle
// Fluttershy
// Applejack
// Rainbow Dash
// Rarity
// Pinkie Pie

#include "Pony.hpp"

Pony::Pony(std::string name) {
	this->ponyName = name;
	std::cout << "Pony " << this->ponyName << " was born!" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony " << this->ponyName << " died :(" << std::endl;
}

void	Pony::onStack() {
	std::cout << "I'm pony " << this->ponyName << " , i was born on the stack" << std::endl;
}

void	Pony::onHeap() {
	std::cout << "I'm pony " << this->ponyName << " , i was born on the heap" << std::endl;
}
