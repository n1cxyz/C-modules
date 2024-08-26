#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "brain.hpp"

int	main(void) {
	{
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
	}
	std::cout << "test1 done" << std::endl;
	{
		Cat cat1;
		Cat cat2 = cat1;
		Cat cat3(cat1);
	}
	std::cout << "test2 done" << std::endl;
	{
		int arr_size = 4;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		Animal* animals[arr_size];

		for (int k = 0; k < (arr_size / 2); k++)
			animals[k] = new Dog();
		for (int k = (arr_size / 2); k < arr_size; k++)
			animals[k] = new Cat();
		for ( int k = 0; k < arr_size; k++)
			delete animals[k];

		delete j;
		delete i;
	}
	return 0;
};