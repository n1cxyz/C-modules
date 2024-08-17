#include "Weapon.hpp"

/* class Weapon {
	class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		~Weapon();
		const std::string&	getType();
		void				setType(std::string type);
};*/
Weapon::Weapon() {
	
};
Weapon::Weapon(std::string type) {
	this->setType(type);
};

Weapon::~Weapon() {

};

const std::string&	Weapon::getType() {
	return this->type;
};

void	Weapon::setType(std::string type) {
	this->type = type;
};