/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:16:04 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 14:08:44 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string nameValues[6] = {
	"Lewis Brian Hopkin Jones",
	"James Marshall Hendrix",
	"Janis Lyn Joplin",
	"James Douglas Morrison",
	"Kurt Donald Cobain",
	"Amy Jade Winehouse"
};

void	randomChump() {
	std::srand(std::time(0)); //use current time as seed for random generator
    int random_variable = std::rand();
	Zombie* randomZombie = new Zombie(nameValues[random_variable % 6], "Simple zombie");
	randomZombie->announce();
	delete randomZombie;
}

int		main() {
	ZombieEvent event;
	event.setZombieType();
	Zombie* onHeap = event.newZombie("Heappie");
	onHeap->announce();
	delete onHeap;
	Zombie onStack("Shawn", "Stack Eater");
	onStack.announce();
	randomChump();
	return 0;
}
