/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:28:03 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:24:59 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
					Zombie();
					~Zombie();
		void		announce();
	private:
		std::string	zombieName;
		std::string	zombieType;
};

#endif
