#ifndef ICE_HPP
#define ICE_HPP

#include "main.hpp"

class Ice : public AMateria {
	protected:
	public:
		Ice(std::string type);
		~Ice();

		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif