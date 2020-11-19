//
// Created by Meldred Emilio on 11/19/20.
//

#ifndef CPP04_CURE_HPP
#define CPP04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &);
	virtual ~Cure();
	Cure&       operator=(const Cure &);
	AMateria*   clone() const;
	void        use(ICharacter& target);
};

#endif //CPP04_CURE_HPP
