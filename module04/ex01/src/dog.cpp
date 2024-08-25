#include "dog.hpp"

/*class Dog : public Dog {
	public:
		Dog();
		Dog(const Dog &dog);
		~Dog();
		Dog& operator = (const Dog &dog);
}; */

Dog::Dog() {
	std::cout << "constructor called from Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
};

Dog::Dog(const Dog &dog) : Animal(dog) {
	std::cout << "copy constructor called from Dog" << std::endl;
	this->type = dog.type;
};

Dog& Dog::operator=(const Dog &dog) {
	std::cout << "assignment overload called from Dog" << std::endl;
	if (this == &dog) {
		return *this;
	}
	this->type = dog.type;
	return *this;
};

Dog::~Dog() {
	std::cout << "Destructor called from Dog" << std::endl;
	delete this->brain;
};

void	Dog::makeSound() const {
	std::cout << this->type << ": bark" << std::endl;
};