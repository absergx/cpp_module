//
// Created by Meldred Emilio on 11/19/20.
//

#ifndef CPP04_MATERIASOURCE_HPP
#define CPP04_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	int                 _count;
	AMateria*           _inventory[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	~MateriaSource();
	MateriaSource&      operator=(const MateriaSource &);
	void                learnMateria(AMateria *);
	AMateria*           createMateria(std::string const & type);
};

#endif //CPP04_MATERIASOURCE_HPP
