//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_SUPERMUTANT_HPP
#define CPP04_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(const SuperMutant &);
	virtual ~SuperMutant();
	SuperMutant&        operator=(const SuperMutant &);
	virtual void        takeDamage(int);
};

#endif //CPP04_SUPERMUTANT_HPP
