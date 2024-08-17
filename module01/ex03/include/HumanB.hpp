#include "Weapon.hpp"

class HumanB {
	private:
		Weapon	Weapon;
		std::string	name;
	public:
		HumanB::HumanB();
		HumanB::~HumanB();
		void	attack();
};