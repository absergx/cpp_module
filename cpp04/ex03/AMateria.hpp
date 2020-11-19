//
// Created by Meldred Emilio on 11/19/20.
//

#ifndef CPP04_AMATERIA_HPP
#define CPP04_AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria {
protected:
	std::string     _type;
	unsigned int    _xp;
public:
	AMateria(std::string const & type);
	AMateria(const AMateria &);
	virtual ~AMateria();
	AMateria&           operator=(const AMateria &);
	std::string const & getType() const; //Returns the materia type
	unsigned int        getXP() const; //Returns the Materia's XP
	virtual AMateria*   clone() const = 0;
	virtual void        use(ICharacter& target);
};

#endif //CPP04_AMATERIA_HPP
