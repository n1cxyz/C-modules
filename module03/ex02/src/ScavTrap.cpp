#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/* class ScavTrap : public ClapTrap{
	public:
		ScavTrap(std::string name);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();

	private:
				
}; */
ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "Default constructor from ScavTrap has been called" << "\n";
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor from ScavTrap has been called" << "\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
};

ScavTrap::~ScavTrap() {
	std::cout << "Destructor from ScavTrap has been called" << "\n";
};
void	ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage" << "\n";
};

void	ScavTrap::guardGate() {
	std::cout << getName() << " is now in gate keeper mode" << "\n";
};