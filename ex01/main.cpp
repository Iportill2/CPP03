#include "ScavTrap.hpp"


void doattack(ClapTrap &a ,ClapTrap &b)
{
	a.attack(b.getName());
	if((a.is_die() == false) && a.getEp() >= 0)
		b.takeDamage(a.getAd());
}
void subject()
{

	ClapTrap	jose("Hose");
	ScavTrap	Gkeeper("Segurata");

	Gkeeper.status(Gkeeper,jose);
	Gkeeper.attack("Hose");
	jose.takeDamage(Gkeeper.getAd());

	Gkeeper.status(Gkeeper,jose);
	Gkeeper.attack("Hose");
	jose.takeDamage(Gkeeper.getAd());

	Gkeeper.status(Gkeeper,jose);
}
void owntest()
{
	ClapTrap	a;
	ClapTrap    b("b");
	ClapTrap	c(a);
	ClapTrap	d = b;

	ScavTrap	A;
	ScavTrap    B("B");
	ScavTrap	C(A);
	ScavTrap	D = B;

	a.status(a,b);
	a.status(c,d);

	a.status(A,B);
	a.status(C,D);

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

	std::cout << std::endl << "[ScavTrap A]" << std::endl;
	A.viewstats();
	std::cout << "[ScavTrap B]" << std::endl;
	B.viewstats();
	std::cout << "[ScavTrap C]" << std::endl;
	C.viewstats();
	std::cout << "[ScavTrap D]" << std::endl;
	D.viewstats();
	std::cout << "///////////////////////////////////////2" << std::endl;

	//a.guardGate();

	A.guardGate();
	B.guardGate();
	C.guardGate();
	D.guardGate();

	A.setName("NameA");
	B.setName("NameB");
	C.setName("NameC");
	D.setName("NameD");


	A.guardGate();
	B.guardGate();
	C.guardGate();
	D.guardGate();

	doattack(A,B);

	std::cout << std::endl << "[ScavTrap A]" << std::endl;
	A.viewstats();
	std::cout << "[ScavTrap B]" << std::endl;
	B.viewstats();
	A.setHp(20);
	//B.attack(A.getName());
	doattack(B,A);
	
	std::cout << std::endl << "[ScavTrap A]" << std::endl;
	A.viewstats();
	std::cout << "[ScavTrap B]" << std::endl;
	B.viewstats();

	B.status(a,b);
	B.status(A,B);
	D.status(C,c);
}
int main()
{
	//subject();
	owntest();

	return (0);
}
