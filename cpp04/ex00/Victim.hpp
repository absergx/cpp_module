//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_VICTIM_HPP
#define CPP04_VICTIM_HPP

# include <string>
# include <iostream>

class Victim {
public:
	Victim(const std::string &);
	Victim(const Victim &);
	~Victim();
	Victim&         operator=(const Victim &);
	std::string     getName() const;
	virtual void    getPolymorphed() const;
protected:
	std::string     _name;
};

std::ostream	&operator<<(std::ostream &os, const Victim &victim);

#endif //CPP04_VICTIM_HPP
