#include "main.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"

/* class Cure : public AMateria {
	protected:
	public:
		Cure(std::string type);
		~Cure();

		AMateria*	clone() const;
		void		use(ICharacter& target);
}; */

Cure::Cure(std::string type) : AMateria("cure") {
}