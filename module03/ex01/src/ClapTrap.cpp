#include "ClapTrap.hpp"

/* class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_attackDamage(unsigned int amount);
		void		setName(std::string name);
		std::string	getName(void);
	private:
		std::string	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;		
}; */

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Contructor has been called" << "\n";
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
};

ClapTrap::ClapTrap(const ClapTrap& claptrap) {
	std::cout << "Copy Contructor has been called" << "\n";
	this->name = claptrap.name;
	this->hitPoints = claptrap.hitPoints;
	this->energyPoints = claptrap.energyPoints;
	this->attackDamage = claptrap.attackDamage;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap) {
	if (this != &claptrap) {
		std::cout << "Assignment operator has been called" << "\n";
		this->name = claptrap.name;
		this->hitPoints = claptrap.hitPoints;
		this->energyPoints = claptrap.energyPoints;
		this->attackDamage = claptrap.attackDamage;
	}
	return *this;
};

ClapTrap::~ClapTrap() {
	std::cout << "Destructor has been called" << "\n";
};

void ClapTrap::attack(const std::string& target) {
	if (energyPoints != 0 && hitPoints != 0) {
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attackDamage << " points of damage" << "\n";
	}
};

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > hitPoints)
		hitPoints = 0;
	else
		this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage " << "\n";
};

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints != 0 && hitPoints != 0) {
		this->hitPoints += amount;
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " points of hitPoints" << "\n";
	}
};

void	ClapTrap::setAttackDamage(unsigned int amount) {
	this->attackDamage = amount;
	std::cout << "ClapTrap " << this->name << " attackDamage set to " << amount << "\n";
};

void	ClapTrap::setName(std::string name) {
	this->name = name;
};

std::string	ClapTrap::getName(void) {
	return this->name;
};