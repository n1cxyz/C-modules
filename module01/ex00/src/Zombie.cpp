#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
	std::cout << name << " has arrived" << "\n";
}

Zombie::~Zombie() {
	std::cout << name << " died... miserably." << "\n";
}
void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnzzzZ..." << "\n";
}