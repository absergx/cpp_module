/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:40:29 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 16:25:22 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

class Brain {
	public:
					Brain();
					~Brain();
		std::string	identify() const;
	private:
		int			weight;
};

#endif
