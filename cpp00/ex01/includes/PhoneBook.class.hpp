/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:50:14 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 17:04:10 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "MyAwesomePhoneBook.hpp"

class PhoneBook {
	public:
							PhoneBook ();
		void				addContact();
		void				serchContact();
	private:
		Contact 			contacts[8];
		int					countContacts;
		void				printAllContacts();
		bool				isBookFull();
		std::string const&	getShortName(std::string const& str);
};

#endif