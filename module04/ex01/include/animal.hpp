#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &animal);
		virtual ~Animal();
		Animal& operator = (const Animal &animal);

		std::string		getType() const;
		virtual void	makeSound(void) const;
	protected:
		std::string type;
};

#endif