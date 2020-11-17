//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_PEON_HPP
#define CPP04_PEON_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(const std::string &);
	Peon(const Peon &);
	~Peon();
	Peon&           operator=(const Peon &);
	virtual void    getPolymorphed() const;
};

#endif //CPP04_PEON_HPP
