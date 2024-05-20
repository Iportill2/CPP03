#include "ScavTrap.hpp"
#include "FragTrap.hpp"
void subject()
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
void testConstDest()
{
	FragTrap a;
	ScavTrap b;
	ClapTrap c;
}
void owntest()
{
	FragTrap a;
	FragTrap b("Fb");
	FragTrap c(b);
	FragTrap d = a;

	a.status(a,b);
	a.status(c,d);

	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();
	d.highFivesGuys();
}
int main()
{
	subject();
	//testConstDest();
	//owntest();
}
