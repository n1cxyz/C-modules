#include "Weapon.hpp"

/* class Weapon {
	private:
		std::string	type;
	public:
		Weapon::Weapon();
		Weapon::~Weapon();
		const std::string&	getType();
		void				setType(std::string type);
};
}; */
Weapon::Weapon() {

};

Weapon::~Weapon() {

};

const std::string&	Weapon::getType() {
	return this->type;
};

void	Weapon::setType(std::string type) {
	this->type = type;
};