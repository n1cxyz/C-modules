#include <iostream>
#include <stdio.h>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon {
	private:
		std::string	type;
	public:
		Weapon::Weapon();
		Weapon::~Weapon();
		const std::string&	getType();
		void				setType(std::string type);
};