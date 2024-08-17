#include "Zombie.hpp"

int	main(void) {
	Zombie	*array = zombieHorde(5, "Ralph");
	delete[] array;
	return 0;
};
