#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();
		Dog &operator = (const Dog &dog);

		void makeSound(void);
};

#endif