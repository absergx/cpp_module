//
// Created by Meldred Emilio on 11/18/20.
//

#ifndef CPP04_TACTICALMARINE_HPP
#define CPP04_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	virtual ~TacticalMarine();
	TacticalMarine&     operator=(const TacticalMarine &);
	ISpaceMarine*       clone() const;
	void                battleCry() const;
	void                rangedAttack() const;
	void                meleeAttack() const;
};

#endif //CPP04_TACTICALMARINE_HPP
