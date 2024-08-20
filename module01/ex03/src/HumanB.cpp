/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:06:00 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:06:02 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

/* class HumanB {
	private:
		Weapon	Weapon;
		std::string	name;
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon Weapon);
}; */
HumanB::HumanB(std::string name) : name(name) {

};

HumanB::~HumanB() {

};

void	HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << "\n";
};

void	HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
};
