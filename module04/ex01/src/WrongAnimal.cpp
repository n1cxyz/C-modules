#include "WrongAnimal.hpp"

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

WrongAnimal::WrongAnimal() {
	std::cout << "constructor called from WrongAnimal" << std::endl;
	this->type = "WrongAnimal";
};

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
	std::cout << "copy constructor called from WrongAnimal" << std::endl;
	this->type = animal.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal) {
	std::cout << "assignment overload overload called from WrongAnimal" << std::endl;
	if (this == &animal) {
		return *this;
	}
	this->type = animal.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor called from WrongAnimal" << std::endl;
};

void	WrongAnimal::makeSound() const {
	std::cout << this->type << " makes some sound" << std::endl;
};

std::string	WrongAnimal::getType() const {
	return this->type;
};