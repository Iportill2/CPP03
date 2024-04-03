#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  ClapTrap()
{
	print("ScavTrap Default Constructor");
	setName("Random");
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
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
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
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy constructor" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap()
{
	print("ScavTrap Destructor");
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