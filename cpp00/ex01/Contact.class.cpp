/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 02:12:50 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 15:50:04 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

Contact::Contact() {}

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
