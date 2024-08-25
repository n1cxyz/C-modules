#include "animal.hpp"

/* class Animal {
	public:
		Animal();
		Animal(const Animal &animal);
		~Animal();
		Animal& operator = (const Animal &animal);

		void makeSound(void);
	protected:
		std::string type;
}; */

Animal::Animal() {
	std::cout << "constructor called from Animal" << std::endl;
	this->type = "Animal";
};

Animal::Animal(const Animal &animal) {
	std::cout << "copy constructor called from Animal" << std::endl;
	this->type = animal.type;
}

Animal& Animal::operator=(const Animal &animal) {
	std::cout << "assignment overload overload called from Animal" << std::endl;
	if (this == &animal) {
		return *this;
	}
	this->type = animal.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Destructor called from Animal" << std::endl;
};

void	Animal::makeSound() const {
	std::cout << this->type << " makes some sound" << std::endl;
};

std::string	Animal::getType() const {
	return this->type;
};

