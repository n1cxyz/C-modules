#include "WrongCat.hpp"

/*class WrongCat : public WrongCat {
	public:
		WrongCat();
		WrongCat(const WrongCat &cat);
		~WrongCat();
		WrongCat& operator = (const WrongCat &cat);
}; */

WrongCat::WrongCat() {
	std::cout << "constructor called from WrongCat" << std::endl;
	this->type = "WrongCat";
};

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
	std::cout << "copy constructor called from WrongCat" << std::endl;
	this->type = cat.type;
};

WrongCat& WrongCat::operator=(const WrongCat &cat) {
	std::cout << "assignment overload called from WrongCat" << std::endl;
	if (this == &cat) {
		return *this;
	}
	this->type = cat.type;
	return *this;
};

WrongCat::~WrongCat() {
	std::cout << "Destructor called from WrongCat" << std::endl;
};

void	WrongCat::makeSound() const {
	std::cout << this->type << ": meow" << std::endl;
};