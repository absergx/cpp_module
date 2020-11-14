/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 19:20:42 by memilio           #+#    #+#             */
/*   Updated: 2020/11/14 15:38:58 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>
# include <cmath>

class Fixed {
	public:
							Fixed();
							Fixed(const int num);
							Fixed(const float num);
							Fixed(const Fixed &num);
							~Fixed();
		float				toFloat() const;
		int					toInt() const;
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		Fixed &				operator=(const Fixed &);
	private:
		int					fixedValue;
		static const int	numberOfFractionalBits = 8;
};

std::ostream& operator<< (std::ostream &out, const Fixed& fixed);

#endif
