#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	{
		ClapTrap anton("anton");
		ScavTrap thomas("thomas");
		FragTrap eugene("eugene");
		thomas.guardGate();
		thomas.attack("anton");
		anton.attack("thomas");
		eugene.highFivesGuys();
	}
}