/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:17:15 by memilio           #+#    #+#             */
/*   Updated: 2020/11/10 17:01:04 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed {
	public:
							Fixed();
							Fixed(const Fixed &num);
							~Fixed();
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		Fixed &				operator=(const Fixed &);
	private:
		int					fixedValue;
		static const int	numberOfFractionalBits = 8;
};

#endif
