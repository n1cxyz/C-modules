#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &animal);
		virtual ~AAnimal();
		AAnimal& operator = (const AAnimal &animal);

		std::string		getType() const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string type;
};

#endif