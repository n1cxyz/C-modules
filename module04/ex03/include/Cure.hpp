#ifndef CURE_HPP
#define CURE_HPP

#include "main.hpp"

class Cure : public AMateria {
	protected:
	public:
		Cure(std::string type);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif