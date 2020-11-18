//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_PLASMARIFLE_HPP
#define CPP04_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	virtual ~PlasmaRifle();
	PlasmaRifle&    operator=(const PlasmaRifle &);
	void            attack() const;
};

#endif //CPP04_PLASMARIFLE_HPP
