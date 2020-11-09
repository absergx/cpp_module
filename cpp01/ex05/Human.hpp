/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:02:46 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:25:41 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {
	public:
						Human();
						~Human();
		std::string		identify() const;
		Brain const&	getBrain();
	private:
		Brain			brain;
};

#endif
