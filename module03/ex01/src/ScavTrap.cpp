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
	std::cout << "Default constructor from derived class has been called" << "\n";
};

ScavTrap::ScavTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) : ClapTrap(name, hitPoints, energyPoints, attackDamage) {
	std::cout << "Costructor from derived class has been called" << "\n";
};

ScavTrap::~ScavTrap() {
	std::cout << "Destructor from derived class has been called" << "\n";
};
void	ScavTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << getName() << " attacks " << target << "\n";
};

void	ScavTrap::guardGate() {
	std::cout << getName() << " is now in gate keeper mode" << "\n";
};