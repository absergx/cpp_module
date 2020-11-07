/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:08:01 by memilio           #+#    #+#             */
/*   Updated: 2020/11/07 19:46:47 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak() {
	std::string*	panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}
