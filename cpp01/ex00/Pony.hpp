/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:01:07 by memilio           #+#    #+#             */
/*   Updated: 2020/11/07 19:00:41 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>

class Pony {
	public:
		explicit	Pony(std::string name);
					~Pony();
		void		onStack();
		void		onHeap();
	private:
		std::string	ponyName;
};

#endif
