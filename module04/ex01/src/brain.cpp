#include "brain.hpp"

/* class Brain {
	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();
		Brain& operator = (const Brain& brain);

	protected:
		std::string* ideas;

}; */

Brain::Brain() {
	std::cout << "Brain constructed" << std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		ideas[i] = "";
	}
}

Brain::Brain(const Brain& brain) {
	std::cout << "Brain copied" << std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		ideas[i] = brain.ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
	delete[] ideas;
}

Brain& Brain::operator=(const Brain& brain) {
	std::cout << "Brain assigned" << std::endl;
	if (this == &brain) {
		return *this;
	}
	for (int i = 0; i < 100; i++) {
		ideas[i] = brain.ideas[i];
	}
	return *this;
}