#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	{
		//ClapTrap anton("anton");
		//ScavTrap thomas("thomas");
		//FragTrap eugene("eugene");
		DiamondTrap david("david");		
		david.guardGate();
		david.highFivesGuys();
		david.attack("anton");
		david.whoAmI();
		//std::cout << david.getName() << "\n";
		//thomas.guardGate();
		//thomas.attack("anton");
		//anton.attack("thomas");
		//eugene.highFivesGuys();
	}
}