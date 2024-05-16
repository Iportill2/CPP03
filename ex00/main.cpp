#include "ClapTrap.hpp"

void subject(void)
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
	return;
}

void owntest()
{

	//CANONICAL
	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	ClapTrap a;
	ClapTrap b("B");
	ClapTrap c(b);
	ClapTrap d;

	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();

	d = c;
	std::cout << std::endl << "d = b;" << std::endl;

	std::cout << "///////////////////////////////////////" << std::endl;

	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	std::cout << "///////////////////////////////////////" << std::endl;
	std::cout << "	a.setName(a)b.setName(b)c.setName(c)" << std::endl;
	a.setName("a");
	b.setName("b");
	c.setName("c");

	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

	std::cout << "///////////////////////////////////////" << std::endl;

	a.attack(b.getName());
	a.setAd(3);
	a.attack(b.getName());
	b.setAd(4);
	b.attack(a.getName());

	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	std::cout << "///////////////////////////////////////" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAd());


	std::cout << "///////////////////////////////////////" << std::endl;

	a.setHp(9999);
	b.setEp(0);
	c.setAd(1);
	
	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	//HACER FUNCION QUE CONTENGA ATTACK && REPAIR
	b.setHp(0);
	b.setEp(1);
	b.attack(a.getName());
	if(b.getEp() > 0 && b.getHp() > 0)
		a.takeDamage(b.getAd());
}
int main()
{
	owntest();
}
