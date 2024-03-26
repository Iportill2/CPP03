#include "ClapTrap.hpp"
int main()
{
	ClapTrap ramd;
	ClapTrap pepe("pepe");
	ramd.attack("pepe");
	pepe.takeDamage(40);
	ramd.status(ramd,pepe);
	pepe.beRepaired(20);
	ramd.status(ramd,pepe);
	ramd.attack("pepe");
	ramd.status(ramd,pepe);
}
