#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ClapTrap	a("lucas");
	ScavTrap	pepi("pepe");
	FragTrap	paca("paco");

	paca.highFivesGuys();
	pepi.attack("paco");
	paca.attack("pepe");
}
