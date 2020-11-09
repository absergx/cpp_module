/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:28:17 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:24:56 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include "Zombie.hpp"

class ZombieHorde {
	public:
		explicit	ZombieHorde(int count);
					~ZombieHorde();
		void		announce();
	private:
		int			zombieCount;
		Zombie*		horde;
};

#endif
