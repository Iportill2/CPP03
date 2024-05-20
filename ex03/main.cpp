
#include "DiamondTrap.hpp"

void subject()
{
	DiamondTrap	diamantito("Diamantito");
	DiamondTrap	diamantita;
	diamantito.whoAmI();
	diamantita.whoAmI();
	diamantita.attack(diamantito.getName());
	diamantito.attack(diamantita.getName());
}
void owntest()
{
	//DiamondTrap a;
/*
 	std::cout <<"--------------------" << std::endl;
	DiamondTrap b("B");
	std::cout <<"--------------------" << std::endl;
	DiamondTrap c(b);
	std::cout <<"--------------------" << std::endl;
	DiamondTrap e("pepe");
	std::cout <<"--------------------" << std::endl;
	DiamondTrap d = e;
	std::cout <<"--------------------" << std::endl; 
	*/
/* 	ClapTrap a;
	ScavTrap b;
	FragTrap c;
	DiamondTrap d;
	b.status(a,b);
	d.status(c,d); 
	*/
std::cout <<"---------DEFAULT CONST-----------" << std::endl;
	DiamondTrap a;
	DiamondTrap b("B");
	DiamondTrap c(b);
	DiamondTrap d = b;
	b.status(a,b);
	d.status(c,d); 

	std::cout <<"---------CONST-----------" << std::endl;
	DiamondTrap e("E");
	DiamondTrap f("F");
	DiamondTrap g("G");
	DiamondTrap h("H");

	e.status(e,f);
	f.status(g,h); 
	std::cout <<"-----------COPY CONST---------" << std::endl;
	DiamondTrap i(e);
	DiamondTrap j(f);
	DiamondTrap k(g);
	DiamondTrap l(h);

	a.status(i,j);
	b.status(k,l); 
	std::cout <<"--------- OPERATOR= -----------" << std::endl;
	i =a;
	j=b;
	k=c;
	l=d;

	a.status(i,j);
	b.status(k,l); 
	std::cout <<"---------WHO I AM-----------" << std::endl;
	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	d.whoAmI();
	std::cout <<"" << std::endl;
	e.whoAmI();
	f.whoAmI();
	g.whoAmI();
	h.whoAmI();
	std::cout <<"" << std::endl;
	i.whoAmI();
	j.whoAmI();
	k.whoAmI();
	l.whoAmI();
	std::cout <<"---------using 	ScavTrap::attack-----------" << std::endl;
	e.attack("pepe");
	f.attack("juan");
	g.attack("pepito");
	h.attack("juanito");
	e.status(e,f);
	f.status(g,h); 
}
int main()
{
	//subject();
	owntest();
	return (0);
}

