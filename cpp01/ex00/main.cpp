/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:01:12 by memilio           #+#    #+#             */
/*   Updated: 2020/11/07 19:06:11 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony* fluttershy = new Pony("Fluttershy");
	fluttershy->onHeap();
	delete fluttershy;
}

void	ponyOnTheStack() {
	Pony	pony("Twilight Sparkle");
	pony.onStack();
}

int		main() {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
