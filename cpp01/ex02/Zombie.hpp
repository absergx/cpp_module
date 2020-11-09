/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:49:43 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:24:26 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie {
	public:
	explicit		Zombie(std::string name, std::string type);
					~Zombie();
		void		announce();
	private:
		std::string	zombieName;
		std::string	zombieType;
};

#endif
