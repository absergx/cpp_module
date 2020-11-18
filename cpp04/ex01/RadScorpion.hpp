//
// Created by Meldred Emilio on 11/17/20.
//

#ifndef CPP04_RADSCORPION_HPP
#define CPP04_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
	RadScorpion();
	RadScorpion(const RadScorpion &);
	virtual ~RadScorpion();
	RadScorpion&    operator=(const RadScorpion &);
};

#endif //CPP04_RADSCORPION_HPP
