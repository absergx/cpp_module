/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:28:03 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 17:41:42 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie {
	public:
					Zombie();
					~Zombie();
		void		announce();
	private:
		std::string	zombieName;
		std::string	zombieType;
};
