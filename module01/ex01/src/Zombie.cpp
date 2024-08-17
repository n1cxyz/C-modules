#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout <<  "a new zombie has arrived" << "\n";
};

Zombie::~Zombie() {
	std::cout << name << " died... miserably." << "\n";
};
        
void    Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
};

void	Zombie::setName(std::string name) {
	this->name = name;
}