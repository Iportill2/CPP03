#include "FragTrap.hpp"
FragTrap::FragTrap() : ScavTrap()
{
	print("FragTrap Default Constructor");
	setName("Random_frag");
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
FragTrap::FragTrap(std::string name) : ScavTrap(name)
{
	print("FragTrap Constructor");
	setHp(100);
	setEnergy(100);
	setAd(30);
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
FragTrap::FragTrap(const FragTrap &copy)
{
	print("FragTrap Copy constructor");
	*this = copy;
}
FragTrap::~FragTrap()
{
	print("FragTrap Destructor");
}
FragTrap & FragTrap::operator =(FragTrap const &inst)
{
	this->setName(inst.getName());
	this->setHp(inst.getHp());
	this->setEnergy(inst.getEp());
	this->setAd(inst.getAd());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	print("High five!!");
}