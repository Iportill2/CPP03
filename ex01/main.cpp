#include "ScavTrap.hpp"
int main()
{
	ClapTrap	pepes("pepe");
	ClapTrap	jose("Hose");
	ClapTrap	tete;
	ScavTrap	Gkeeper("Segurata");
	Gkeeper.status(Gkeeper,tete);
	pepes.attack("Hose");
	if(pepes.getHp() > 0 && pepes.getEp() > 0)
		jose.takeDamage(20);
	jose.attack("pepe");
	if(jose.getHp() > 0 && jose.getEp() > 0)
		pepes.takeDamage(20);
	pepes.attack("Hose");
	if(pepes.getHp() > 0 && pepes.getEp() > 0)
		jose.takeDamage(20);
	Gkeeper.guardGate();
	Gkeeper.attack("pepe");
	if(Gkeeper.getHp() > 0 && Gkeeper.getEp() > 0)
		pepes.takeDamage(1);
	jose.status(jose,tete);
	jose.beRepaired(20);
	jose.status(jose,pepes);
	jose.attack("tete");
	if(jose.getHp() > 0 && jose.getEp() > 0)
		tete.takeDamage(20);


	return (0);
}
