#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "brain.hpp"

int	main(void) {

	//Animal* array[20];

	Animal** array;

	array = new Animal*[20];

	for (int i = 0; i < 10; i++) {
		array[i] = new Dog;
	}
	for (int i = 10; i < 20; i++) {
		array[i] = new Cat;
	}
	for (int i = 0; i < 20; i++) {
		delete array[i];
	}
	delete[] array;
	return 0;
};