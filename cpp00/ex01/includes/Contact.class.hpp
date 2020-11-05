/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:34:07 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 15:30:02 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include "MyAwesomePhoneBook.hpp"

class Contact {
	public:
							Contact();
		std::string const&	getFirstName();
		std::string const&	getLastName();
		std::string const&	getNickName();
		void				printAllValues();
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	login;
		std::string	postalAddress;
		std::string	emailAddress;
		std::string	phoneNumber;
		std::string	birthDate;
		std::string	favoriteMeal;
		std::string	underwearColor;
		std::string	darkestSecret;
};

#endif