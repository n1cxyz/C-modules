#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &animal);
		~Animal();
		Animal& operator = (const Animal &animal);

		virtual void makeSound(void);
	protected:
		std::string type;
};

#endif