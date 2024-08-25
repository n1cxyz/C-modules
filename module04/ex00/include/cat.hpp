#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat& operator = (const Cat &cat);

		void makeSound(void);
};

#endif