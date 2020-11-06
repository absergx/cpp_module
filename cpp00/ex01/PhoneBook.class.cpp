/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:09:45 by memilio           #+#    #+#             */
/*   Updated: 2020/11/06 19:48:30 by memilio          ###   ########.fr       */
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
	std::getline(std::cin, contact[0]);
	std::cout << "Enter last name: ";
	std::getline(std::cin, contact[1]);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, contact[2]);
	if (!contact[0].length() && !contact[1].length() && !contact[2].length()) {
		std::cerr << "At least one field (First name / Last name / Nickname) must be not emtpy. Try again." << std::endl;
		return ;
	}
	std::cout << "Enter login: ";
	std::getline(std::cin, contact[3]);
	std::cout << "Enter postal address: ";
	std::getline(std::cin, contact[4]);
	std::cout << "Enter email address: ";
	std::getline(std::cin, contact[5]);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, contact[6]);
	std::cout << "Enter birth date: ";
	std::getline(std::cin, contact[7]);
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, contact[8]);
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, contact[9]);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, contact[10]);
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
		std::cout << "Enter an index to show full contact info (" << i + 1 << "/3): ";
		std::cin >> contactIndex;
		if (contactIndex < 0 || contactIndex >= this->countContacts)
			std::cerr << "Wrong index, try again" << std::endl;
		else {
			this->contacts[contactIndex].printAllValues();
			break ;
		}
	}
}

void	PhoneBook::printAllContacts() {
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First name" << "|" << std::setw(10) << "Last name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < this->countContacts; i++) {
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << this->getShortName(this->contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << this->getShortName(this->contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << this->getShortName(this->contacts[i].getNickName());
		std::cout << "|" << std::endl;
	}
}

std::string PhoneBook::getShortName(std::string const& str) {
	if (str.length() <= 10)
		return str;
	else
		return str.substr(0, 9) + '.';
}

bool	PhoneBook::isBookFull() {
	if (this->countContacts == 8) {
		std::cerr << "PhoneBook is full" << std::endl;
		return true;
	}
	return false;
}
