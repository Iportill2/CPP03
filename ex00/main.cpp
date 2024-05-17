#include "ClapTrap.hpp"




void doattack(ClapTrap &a ,ClapTrap &b)
{
	a.attack(b.getName());
	if((a.is_die() == false) && a.getEp() >= 0)
		b.takeDamage(a.getAd());
}

void subject(void)
{	
	ClapTrap ramd;
	ClapTrap pepe("pepe");
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

	std::cout << "///////////////////////////////////////1" << std::endl;

	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	std::cout << "///////////////////////////////////////2" << std::endl;



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

	std::cout << "///////////////////////////////////////3" << std::endl;

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
	std::cout << "///////////////////////////////////////4" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAd());


	std::cout << "///////////////////////////////////////5" << std::endl;

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



	std::cout << "///////////////////////////////////////6" << std::endl;
	std::cout << std::endl << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();


	std::cout << "----- MY DO ATTACK -----" << std::endl;

	a.setAd(1);
	doattack(a,b);

	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();


}
int main()
{
	owntest();
}
