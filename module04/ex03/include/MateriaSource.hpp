#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "main.hpp"

class MateriaSource {
	public:
					~MateriaSource();
		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string& type);
};

#endif