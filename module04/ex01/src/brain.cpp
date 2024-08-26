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
}

Brain::Brain(const Brain& brain) {
	std::cout << "Brain copied" << std::endl;
	*this = brain;
}

Brain::~Brain() {
	std::cout << "Brain destructed" << std::endl;
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