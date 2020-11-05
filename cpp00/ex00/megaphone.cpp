/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:59:24 by memilio           #+#    #+#             */
/*   Updated: 2020/11/04 22:00:14 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	ft_toupper(std::string str) {
	for (std::string::size_type i = 0; i < str.length(); i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return str;
}

int			main(int ac, char **av) {
	std::string		str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++) {
			str = av[i];
			std::cout << ft_toupper(str);
			if (i + 1 < ac)
				std::cout << " ";
		}
	std::cout << std::endl;
	return 0;
}
