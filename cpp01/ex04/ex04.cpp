/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:35:03 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 17:38:56 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << *strPtr << " - display using the pointer" << std::endl;
	std::cout << strRef << " - display using the reference" << std::endl;
	return 0;
}
