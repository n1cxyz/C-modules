#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	{
		ClapTrap anton("anton", 10, 10, 0);
		ScavTrap thomas("thomas", 100, 50, 20);
		thomas.guardGate();
		thomas.attack("anton");
		anton.attack("thomas");
	}
	{
		ClapTrap anton("anton", 10, 10, 5);
		ScavTrap thomas("thomas", -100, 99, 20);
		thomas.guardGate();
		thomas.attack("anton");
		anton.attack("thomas");
	}
}