#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	print("Default Constructor DiamonTrap called");
	this->_name = "default";
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	_name = name;///Ramdom1
	//this->_name = name;///Ramdom1
	//initName(name);//Diamantitos
	print("Constructor DiamonTrap called");
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::print("Copy constructor DiamonTrap called");
	*this=copy;
}
DiamondTrap::~DiamondTrap()
{
	print("Destructor DiamonTrap called");
}
DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst1)
{
	print("operator= DiamonTrap called");
	this->_name = inst1._name;
	this->_hit_points = inst1._hit_points;
	this->_energy_point = inst1._energy_point;
	this->_attack_damage = inst1._attack_damage;

	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "my name is " << _name << std::endl;
	//std::cout << "my name is " << this->_name << std::endl;
	std::cout << "and my ClapTrap name is ";
	print(ClapTrap::getName());	//
	print(ClapTrap::_name);		//da igual ino que otro
}
void DiamondTrap::print(std::string s)
{
	std::cout << s << std::endl;
}

/*

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Unknown";
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	this->_name = name;
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);

	std::cout << "💎 DiamondTrap parametrized constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
*/