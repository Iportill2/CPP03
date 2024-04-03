#include "ClapTrap.hpp"
int main()
{
	ClapTrap ramd;
	ClapTrap pepe("pepe");

/* 	ramd.status(ramd,pepe);
	ramd.attack("pepe");
	pepe.takeDamage(9);
	pepe.attack("ramd");
	ramd.beRepaired(200);
	ramd.status(ramd,pepe);
	pepe.beRepaired(20);
	ramd.status(ramd,pepe); */

	pepe.beRepaired(200);
	ramd.status(ramd,pepe);
}
