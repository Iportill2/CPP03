#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
	ClapTrap	a("lucas");
	ScavTrap	pepe("pepe");
	FragTrap	paco("paco");

	paco.highFivesGuys();
	paco.status(pepe,paco);
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	pepe.attack("paco");
	paco.takeDamage(pepe.getAd());
	paco.status(pepe,paco);
	paco.attack("pepe");
}
