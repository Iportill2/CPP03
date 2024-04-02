#include "FragTrap.hpp"
FragTrap::FragTrap() 
{
	print("Defaut FragTrap Constructor");
	//this->_name=("FragTrapName");
	initHp(100);
	initEnergy(50);
	initAd(20);
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor wit name " << _name << std::endl;
	initHp(100);
	initEnergy(50);
	initAd(20);
}
FragTrap::FragTrap(const FragTrap &copy)
{
	print("Copy of FragTrap");
	*this = copy;
}
FragTrap::~FragTrap()
{
	print("FragTrap Destructor");
}
FragTrap & FragTrap::operator =(FragTrap const &inst1)
{
	this->_name = inst1._name;
	this->_hit_points = inst1._hit_points;
	this->_energy_point = inst1._energy_point;
	this->_attack_damage = inst1._attack_damage;

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	print("High five!!");
}
void FragTrap::print(std::string s)
{
	std::cout << s << std::endl;
}

/*
FragTrap::FragTrap(void) : ClapTrap()
{
	setHp(100);
	setEp(100);
	setAt(30);
	
	
	std::cout << "FragTrap (Default) 👾 : " << this->getName() << " assembled!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHp(100);
	setEp(100);
	setAt(30);
	

	std::cout << "FragTrap 👾 : " << this->getName() << " assembled!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap ⚙️ Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " 👎" << std::endl;
}

FragTrap & FragTrap::operator =(FragTrap const &inst2)
{
	this->_name = inst2._name;
	this->_hitPoints = inst2._hitPoints;
	this->_energyPoints = inst2._energyPoints;

	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " 📢 GIVE ME 5 MTHRFKR! 🖐🖐🖐🖐🖐" << std::endl;
}
*/