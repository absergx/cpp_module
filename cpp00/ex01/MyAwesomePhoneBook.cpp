/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:26:38 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 17:46:59 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

std::string getShortName(std::string const& str) {
	if (str.length() <= 10)
		return str;
	else {
		// std::string const&	shortStr = str.substr(0, 9) + '.';
		return str.substr(0, 9) + '.';
	}
}

int		main(void) {
	std::string				command;
	PhoneBook	book;

	std::cout << "Welcome to PhoneBook, to add a contact use ADD command, to find a contact or show all PhoneBook use SEARCH command, to exit use EXIT command" << std::endl;
	while (true) {
		std::cout << "> ";
		std::cin >> command;
		if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.serchContact();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return 0;
}
