#include "ClapTrap.hpp"
/* class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_attackDamage(unsigned int amount);
	private:
		std::string	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;		
}; */
int	main(void) {
	{
		ClapTrap	Trap1("Thomas");
		ClapTrap	Trap2(Trap1);
		Trap1.set_attackDamage(1);
		Trap2.setName("Eugene");
		for (int i = 0; i < 11; i++) {
			Trap1.attack("Eugene");
		}
		Trap1.attack("Eugene");
		Trap2.takeDamage(1);
		Trap2.beRepaired(1);
	}
	{
		ClapTrap	Trap1("Thomas");
		ClapTrap	Trap2(Trap1);
		Trap1.set_attackDamage(15);
		Trap2.setName("Eugene");
		Trap1.attack("Eugene");
		Trap2.takeDamage(15);
		Trap2.attack("Thomas");
		Trap2.beRepaired(1);
	}
}