//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_POWERFIST_HPP
#define CPP04_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(const PowerFist &);
	virtual ~PowerFist();
	PowerFist&  operator=(const PowerFist &);
	void        attack() const;
};

#endif //CPP04_POWERFIST_HPP
