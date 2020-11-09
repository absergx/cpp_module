/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:20:48 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:44:39 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon {
	public:
							Weapon(std::string type);
							~Weapon();
		std::string const&	getType();
		void				setType(std::string type);
	private:
		std::string			type;
};

#endif
