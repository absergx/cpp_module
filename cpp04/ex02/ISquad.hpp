//
// Created by Meldred Emilio on 11/18/20.
//

#ifndef CPP04_ISQUAD_HPP
#define CPP04_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad {
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif //CPP04_ISQUAD_HPP
