#ifndef CLAPTRAP_HPP
#define	CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:

		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		setAttackDamage(unsigned int amount);
		void		setName(std::string name);
		std::string	getName(void);
	private:
		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;		
};


#endif