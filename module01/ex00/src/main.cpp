#include "Zombie.hpp"

int main(void) {
	Zombie* zombie = NULL;
	
	zombie = zombie->newZombie("Karl");
	zombie->randomChump("Thomas");
	delete zombie;
	return 0;
}