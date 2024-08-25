#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();
		Brain& operator = (const Brain& brain);

	protected:
		std::string* ideas;

};

#endif