#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	ClapTrap::print("Default Constructor DiamonTrap called");
	this->_name = "default";
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	//_name = name;///Ramdom1
	this->_name = name;///Ramdom1
	//initName(name);//Diamantitos
	std::cout << "Constructor DiamonTrap called " << _name << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::print("Copy constructor DiamonTrap called");
	*this=copy;
}
DiamondTrap::~DiamondTrap()
{
	ClapTrap::print("Destructor DiamonTrap called");
}
DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst1)
{
	ClapTrap::print("operator= DiamonTrap called");
	this->_name = inst1._name;
	this->_hit_points = inst1._hit_points;
	this->_energy_point = inst1._energy_point;
	this->_attack_damage = inst1._attack_damage;

	return (*this);
}

void DiamondTrap::whoAmI()
{
	ClapTrap::print("START of whoAmI Function");
	std::cout << "my name is " << _name << std::endl;
	//std::cout << "my name is " << this->_name << std::endl;
	std::cout << "and my ClapTrap name is ";
	ClapTrap::print(ClapTrap::getName());	//
	ClapTrap::print("END whoAmI Function");
	//ClapTrap::print(ClapTrap::_name);		//da igual ino que otro
}

