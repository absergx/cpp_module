//
// Created by Meldred Emilio on 11/18/20.
//

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &newTacticalMarine) : ISpaceMarine(newTacticalMarine) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine&     TacticalMarine::operator=(const TacticalMarine &other) {
	(void)other;
	return *this;
}

void                TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void                TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISpaceMarine*       TacticalMarine::clone() const {
	TacticalMarine *newTacticalMarine = new TacticalMarine(*this);
	return newTacticalMarine;
}
