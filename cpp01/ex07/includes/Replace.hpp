/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:07:19 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 18:30:06 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <iostream>
# include <fstream>

class Replace {
	public:
						Replace();
						~Replace();
		void			setData(std::string& fileName, std::string& toReplace,
								std::string& withReplace);
		bool			validate();
		void			magic();
	private:
		std::ifstream	file;
		std::string		fileName;
		std::string		toReplace;
		std::string		withReplace;
};

#endif
