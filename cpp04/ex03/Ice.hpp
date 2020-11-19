//
// Created by Meldred Emilio on 11/19/20.
//

#ifndef CPP04_ICE_HPP
#define CPP04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &);
	virtual ~Ice();
	Ice&        operator=(const Ice &);
	AMateria*   clone() const;
	void        use(ICharacter& target);
};

#endif //CPP04_ICE_HPP
