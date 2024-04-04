#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->_name = "Unknown";
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);
	std::cout << magenta ;
	std::cout << "Default Constructor DiamondTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	this->_name = name;
	setHp(FragTrap::_hitPoints);
	setEp(ScavTrap::_energyPoints);
	setAt(FragTrap::_attackDamage);
	std::cout << magenta ;
	std::cout << "Constructor DiamondTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << rojo ;
	std::cout << "Destructor DiamondTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
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



