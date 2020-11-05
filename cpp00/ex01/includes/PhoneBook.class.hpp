/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:50:14 by memilio           #+#    #+#             */
/*   Updated: 2020/11/05 02:08:50 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "MyAwesomePhoneBook.hpp"

class phoneBook {
	private:
		Contact contacts[8];
	public:
					phoneBook (void);
		Contact&	addContact(void);
		void		printContacts(void);
};

#endif