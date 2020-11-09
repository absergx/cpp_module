/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:34:24 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 17:09:09 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
	public:
					HumanA(std::string name, Weapon &weapon);
					~HumanA();
		void		attack();
	private:
		std::string	name;
		Weapon&		weapon;
};

#endif
