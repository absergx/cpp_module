//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_SORCERER_HPP
#define CPP04_SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &);
	~Sorcerer();
	Sorcerer&       operator=(const Sorcerer &);
	std::string     getName() const;
	std::string     getTitle() const;
	void            polymorph(Victim const &);
private:
	std::string     _name;
	std::string     _title;
};

std::ostream	&operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif //CPP04_SORCERER_HPP
