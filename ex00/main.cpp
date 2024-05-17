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
	pepe.takeDamage(1);
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

	//a.attack(b.getName());
	//b.takeDamage(a.getAd());

	a.setAd(2);
	doattack(a,b);

	doattack(a,d);

	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();


	d.beRepaired(4);
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

}
void custom()
{
	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	ClapTrap a;
	ClapTrap b("B");
	ClapTrap c(b);
	ClapTrap d;

	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;

	a.beRepaired(0);
	d.setAd(9);
	doattack(d,d);
	d.beRepaired(2);

	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

	c.setHp(2);
	c.takeDamage(-1);


	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

	c.beRepaired(11);

	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

	c.setdefHp(20);
	c.beRepaired(20);

	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();

	d.setAd(10);
	doattack(d,b);
}
void iban()
{
	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	ClapTrap a;
	ClapTrap b("B");
	ClapTrap c(b);
	ClapTrap d;

	d = c;
	
	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();
	std::cout << "[Claptrap c]" << std::endl;
	c.viewstats();
	std::cout << "[Claptrap d]" << std::endl;
	d.viewstats();
	a.setAd(3);
	b.setAd(4);
	doattack(a, b);

	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();

	//b.beRepaired(-100);//nega
	a.setAd(-100);//nega
	doattack(a,b);

	std::cout << "[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[]]]]]]]]]]]]]]]]]]]]]]]" << std::endl;
	std::cout << "[Claptrap a]" << std::endl;
	a.viewstats();
	std::cout << "[Claptrap b]" << std::endl;
	b.viewstats();

}
int main()
{	
	subject();
	//iban();
	//owntest();
	//custom();
}
