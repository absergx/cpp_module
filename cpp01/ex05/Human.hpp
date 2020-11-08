/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:02:46 by memilio           #+#    #+#             */
/*   Updated: 2020/11/08 18:05:21 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

class Human {
	public:
				Human();
				~Human();
		void	identify();
		void	getBrain();
	private:
		Brain	brain;
};
