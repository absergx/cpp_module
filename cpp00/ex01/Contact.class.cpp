/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:12:50 by memilio           #+#    #+#             */
/*   Updated: 2020/11/06 19:28:03 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

Contact::Contact() {}

void				Contact::setContact(std::string* const& contact) {
	this->firstName = contact[0];
	this->lastName = contact[1];
	this->nickName = contact[2];
	this->login = contact[3];
	this->postalAddress = contact[4];
	this->emailAddress = contact[5];
	this->phoneNumber = contact[6];
	this->birthDate = contact[7];
	this->favoriteMeal = contact[8];
	this->underwearColor = contact[9];
	this->darkestSecret = contact[10];
}

std::string const&	Contact::getFirstName() {
	return this->firstName;
}

std::string const&	Contact::getLastName() {
	return this->lastName;
}

std::string const&	Contact::getNickName() {
	return this->nickName;
}

void				Contact::printAllValues() {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickName << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postalAddress << std::endl;
	std::cout << "Email address: " << this->emailAddress << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Birth dsate: " << this->birthDate << std::endl;
	std::cout << "Favorite meal: " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}
