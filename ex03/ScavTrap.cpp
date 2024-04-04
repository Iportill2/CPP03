#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  ClapTrap()
{
	nprint(verde);
	print("ScavTrap Default Constructor");
	//setName("Random");
	setHp(100);
	setEnergy(50);
	setAd(20);

	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	std::cout << "" << std::endl;
	nprint(rst);
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	nprint(verde);
	print("ScavTrap Constructor");
	setHp(100);
	setEnergy(50);
	setAd(20);
	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	std::cout << "" << std::endl;

	nprint(rst);
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap()
{
	std::cout << rojo;
	print("ScavTrap Destructor");
	std::cout << rst;
}

ScavTrap & ScavTrap::operator =(ScavTrap const &inst)
{
	this->setName(inst.getName());
	this->setHp(inst.getHp());
	this->setEnergy(inst.getEp());
	this->setAd(inst.getAd());
	return (*this);
}
void ScavTrap::guardGate()
{
	print(rojo);
	nprint(getName());
	nprint(" is now in Gate keeper mode!!");
	print(rst);
}