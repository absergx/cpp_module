/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:32:01 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 13:57:24 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent {
	public:
					ZombieEvent();
					~ZombieEvent();
		Zombie*		newZombie(std::string name);
		void		setZombieType();
	private:
		std::string	zombieType;
};
