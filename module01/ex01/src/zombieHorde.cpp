#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name) {
	Zombie *array = new Zombie[N];
	for (int i = 0; i < N; i++) {
		array[i].setName(name);
		array[i].announce();
	}; 
	(void)name;
	return array;
};