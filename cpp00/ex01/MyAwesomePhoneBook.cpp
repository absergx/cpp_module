/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:26:38 by memilio           #+#    #+#             */
/*   Updated: 2020/11/06 19:53:26 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

int		main(void) {
	std::string				command;
	PhoneBook	book;

	std::cout << "Welcome to PhoneBook" << std::endl;
	std::cout << "To add a contact use ADD command" << std::endl;
	std::cout << "To find a contact or show all PhoneBook use SEARCH command";
	std::cout << std::endl << "To exit use EXIT command" << std::endl;
	while (true) {
		std::getline(std::cin, command);
		if (command == "ADD")
			book.addContact();
		else if (command == "SEARCH")
			book.serchContact();
		else if (command == "EXIT")
			break ;
		else if (!command.length())
			continue ;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return 0;
}
