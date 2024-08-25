#include "cat.hpp"

/*class Cat : public Cat {
	public:
		Cat();
		Cat(const Cat &cat);
		~Cat();
		Cat& operator = (const Cat &cat);
}; */

Cat::Cat() {
	std::cout << "constructor called from Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
};

Cat::Cat(const Cat &cat) : Animal(cat) {
	std::cout << "copy constructor called from Cat" << std::endl;
	this->type = cat.type;
};

Cat& Cat::operator=(const Cat &cat) {
	std::cout << "assignment overload called from Cat" << std::endl;
	if (this == &cat) {
		return *this;
	}
	this->type = cat.type;
	return *this;
};

Cat::~Cat() {
	std::cout << "Destructor called from Cat" << std::endl;
	delete this->brain;
};

void	Cat::makeSound() const {
	std::cout << this->type << ": meow" << std::endl;
};