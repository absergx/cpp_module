/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:58:49 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 17:04:25 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
	public:
					HumanB(std::string name);
					~HumanB();
		void		attack();
		void		setWeapon(Weapon& weapon);
	private:
		std::string	name;
		Weapon*		weapon;
};

#endif
