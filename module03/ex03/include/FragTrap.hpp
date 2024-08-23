#ifndef FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);
		
	private:			
};

#endif