#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"

void	doSound(Animal* animal) {
	animal->makeSound();
}

int	main(void) {

	Dog dog;
	Cat cat;
	
	doSound(&cat);
	doSound(&dog);
}