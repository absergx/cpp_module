//
// Created by Meldred Emilio on 11/18/20.
//

#ifndef CPP04_SQUAD_HPP
#define CPP04_SQUAD_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
	int             _count;
	ISpaceMarine    **_squad;
public:
	Squad();
	Squad(const Squad &);
	~Squad();
	Squad&          operator=(const Squad &);
	int             getCount() const;
	ISpaceMarine*   getUnit(int n) const;
	int             push(ISpaceMarine *) const;
};

#endif //CPP04_SQUAD_HPP
