/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 17:36:42 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 18:34:23 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char *av[]) {
	if (ac != 4) {
		std::cerr << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	Replace replace;
	replace.setData(filename, s1, s2);
	if (replace.validate())
		return 1;
	replace.magic();
	return 0;
}
