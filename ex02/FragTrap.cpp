#include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap()
{
	print("FragTrap Default Constructor");
	setName("Random_frag");
	setHp(100);
	setEp(50);
	setAd(20);
	setdefHp(getHp());

/* 	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	std::cout << "" << std::endl; */
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	print("FragTrap Constructor");
	setHp(100);
	setEp(100);
	setAd(30);
	this->setdefHp(this->getHp());

/* 	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	std::cout << "" << std::endl; */
}
FragTrap::FragTrap(const FragTrap &copy): ClapTrap()
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
	this->setEp(inst.getEp());
	this->setAd(inst.getAd());
	this->setdefHp(inst.getdefHp());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	print("High five!!");
}