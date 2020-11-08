/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:49:43 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 13:37:32 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie {
	public:
	explicit		Zombie(std::string name, std::string type);
					~Zombie();
		void		announce();
	private:
		std::string	zombieName;
		std::string	zombieType;
};
