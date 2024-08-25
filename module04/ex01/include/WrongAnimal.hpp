#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &animal);
		virtual ~WrongAnimal();
		WrongAnimal& operator = (const WrongAnimal &animal);

		std::string		getType() const;
		void	makeSound(void) const;
	protected:
		std::string type;
};

#endif