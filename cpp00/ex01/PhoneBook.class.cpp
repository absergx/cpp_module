/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:09:45 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 17:42:18 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

		PhoneBook::PhoneBook() {
	this->countContacts = 0;
}

void	PhoneBook::addContact() {
	std::string	contact[11];

	if (this->isBookFull())
		return ;
	std::cout << "Enter first name: ";
	std::cin >> contact[0];
	std::cout << std::endl;
	std::cout << "Enter last name: ";
	std::cin >> contact[1];
	std::cout << std::endl;
	std::cout << "Enter nickname: ";
	std::cin >> contact[2];
	std::cout << std::endl;
	if (!contact[0].length() && !contact[1].length() && !contact[2].length()) {
		std::cerr << "At least one field (First name / Last name / Nickname) must be not emtpy. Try again." << std::endl;
	}
	std::cout << "Enter login: ";
	std::cin >> contact[3];
	std::cout << std::endl;
	std::cout << "Enter postal address: ";
	std::cin >> contact[4];
	std::cout << std::endl;
	std::cout << "Enter email address: ";
	std::cin >> contact[5];
	std::cout << std::endl;
	std::cout << "Enter phone number: ";
	std::cin >> contact[6];
	std::cout << std::endl;
	std::cout << "Enter birth date: ";
	std::cin >> contact[7];
	std::cout << std::endl;
	std::cout << "Enter favorite meal: ";
	std::cin >> contact[8];
	std::cout << std::endl;
	std::cout << "Enter underwear color: ";
	std::cin >> contact[9];
	std::cout << std::endl;
	std::cout << "Enter darkest secret: ";
	std::cin >> contact[10];
	std::cout << std::endl;
	this->contacts[this->countContacts].setContact(contact);
	this->countContacts++;
}

void	PhoneBook::serchContact() {
	int		contactIndex = 0;

	if (this->countContacts == 0) {
		std::cerr << "Your PhoneBook is empty." << std::endl;
		return ;
	}
	this->printAllContacts();
	for (int i = 0; i < 3; i++) {
		std::cout << "Enter an index to show full contact info (" << i << "/3): ";
		std::cin >> contactIndex;
		if (contactIndex < 0 || contactIndex >= this->countContacts)
			std::cerr << "Wrong index, try again" << std::endl;
		else
			break ;
	}
}

void	PhoneBook::printAllContacts() {
	std::cout << ">>>YOUR PHONEBOOK<<<" << std::endl;
	for (int i = 0; i < this->countContacts; i++) {
		std::cout << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << getShortName(this->contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << getShortName(this->contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << getShortName(this->contacts[i].getNickName());
	}
}

bool	PhoneBook::isBookFull() {
	if (this->countContacts == 8) {
		std::cerr << "PhoneBook is full" << std::endl;
		return true;
	}
	return false;
}
