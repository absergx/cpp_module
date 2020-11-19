//
// Created by Meldred Emilio on 11/18/20.
//

#ifndef CPP04_ASSAULTTERMINATOR_HPP
#define CPP04_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	virtual ~AssaultTerminator();
	AssaultTerminator&  operator=(const AssaultTerminator &);
	ISpaceMarine*       clone() const;
	void                battleCry() const;
	void                rangedAttack() const;
	void                meleeAttack() const;
};

#endif //CPP04_ASSAULTTERMINATOR_HPP
