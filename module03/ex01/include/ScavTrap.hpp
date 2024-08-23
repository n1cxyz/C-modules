#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
		
	private:			
};

#endif