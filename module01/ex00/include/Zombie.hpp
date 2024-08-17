#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
	private:
		std::string name;
};