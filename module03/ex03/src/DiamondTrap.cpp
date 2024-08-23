#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/* class DiamondTrap : public ClapTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		void	attack(const std::string& target);
		void	whoAmI();
		
	private:
		std::string	name;		
}; */

DiamondTrap::DiamondTrap() : ClapTrap() {
	std::cout << "Default constructor from DiamondTrap has been called" << "\n";
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Default constructor from DiamondTrap has been called" << "\n";
};

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor from DiamondTrap has been called" << "\n";
};

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
};

void	DiamondTrap::whoAmI(void) {
	std::cout << "Name: " << DiamondTrap::name << "\n" << "ClapTrap name: " << ClapTrap::name << "\n";
}




