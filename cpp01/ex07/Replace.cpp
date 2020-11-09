/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memilio <memilio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:22:04 by memilio           #+#    #+#             */
/*   Updated: 2020/11/09 18:36:06 by memilio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace() {}

Replace::~Replace() {
	this->file.close();
}

void	Replace::setData(std::string& fileName, std::string& toReplace,
 								std::string& withReplace) {
	this->fileName = fileName + ".replace";
	this->toReplace = toReplace;
	this->withReplace = withReplace;
	this->file.open(fileName);
}

bool	Replace::validate() {
	if (this->toReplace.empty()) {
		std::cerr << "String to replace is empty" << std::endl;
		return true;
	}
	if (this->withReplace.empty()) {
		std::cerr << "String with replace is empty" << std::endl;
		return true;
	}
	if (!this->file.is_open()) {
		std::cerr << "File opening error." << std::endl;
		return true;
	}
	return false;
}

void	Replace::magic() {
	std::ofstream	outFile(this->fileName);
	std::string		tmpStr;

	while (std::getline(file, tmpStr)) {
		if (tmpStr == this->toReplace)
			outFile << this->withReplace << std::endl;
		else
			outFile << tmpStr << std::endl;
	}
	outFile.close();
}
