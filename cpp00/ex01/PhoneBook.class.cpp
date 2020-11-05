/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:09:45 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 15:55:59 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

		PhoneBook::PhoneBook() {
	this->countContacts = 0;
}

void	PhoneBook::addContact() {
	if (this->isBookFull())
		return ;
	std::cout << "Enter first name: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter last name: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter nickname: ";
	std::cin >> ;
	std::cout << std::endl;
	// если три первых поля пустые выводить ошибку и заканчивать ввод
	std::cout << "Enter login: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter postal address: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter email address: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter phone number: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter birth date: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter favorite meal: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter underwear color: ";
	std::cin >> ;
	std::cout << std::endl;
	std::cout << "Enter darkest secret: ";
	std::cin >> ;
	std::cout << std::endl;
	this->countContacts++;
}

void	PhoneBook::serchContact() {
	int		contactIndex = 0;
	this->printAllContacts();
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter an index to show full contact info (" << i << "/3): ";
		std::cin >> contactIndex;
		if (contactIndex < 0 || contactIndex >= this->countContacts)
			std::cerr << "Wrong index, try again" << std::endl;
		else
			break;
	}
}

void	PhoneBook::printAllContacts() {
	
}

bool	PhoneBook::isBookFull() {
	if (this->countContacts == 8) {
		std::cerr << "PhoneBook is full" << std::endl;
		return true;
	}
	return false;
}
