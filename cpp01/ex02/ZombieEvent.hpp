/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:32:01 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:24:17 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include "Zombie.hpp"

class ZombieEvent {
	public:
					ZombieEvent();
					~ZombieEvent();
		Zombie*		newZombie(std::string name);
		void		setZombieType();
	private:
		std::string	zombieType;
};

#endif
