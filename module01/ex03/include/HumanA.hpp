#include "Weapon.hpp"

class HumanA {
	private:
		Weapon	Weapon;
		std::string	name;
	public:
		HumanA::HumanA();
		HumanA::~HumanA();
		void	attack();
};