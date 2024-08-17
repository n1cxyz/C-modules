#include "Weapon.hpp"
#include "HumanA.hpp"

/* class HumanA {
	private:
		Weapon& weapon;
		std::string	name;
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack();
};*/

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {
	this->name = name;
	this->weapon = weapon;
};

HumanA::~HumanA() {
};

void	HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
};