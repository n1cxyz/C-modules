#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/* class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);
		
	private:						
}; */

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "Default constructor from FragTrap has been called" << "\n";
};

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Constructor from FragTrap has been called" << "\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
};

FragTrap::~FragTrap() {
	std::cout << "Destructor from FragTrap has been called" << "\n";
};
void	FragTrap::attack(const std::string& target) {
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage" << "\n";
};

void	FragTrap::highFivesGuys() {
	std::cout << this->name <<  " requests a positive high five! \u270B" << "\n";
};