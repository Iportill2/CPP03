#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Unknown"), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";
	std::cout << azul ;
	std::cout << "Default Constructor Claptrap Named "<< _name << std::endl;
	std::cout << rst ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";
	std::cout << azul ;
	std::cout << "Constructor Claptrap Named " << _name << std::endl;
	std::cout << rst ;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap ⚙️ Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << rojo ;
	std::cout << "Destructor Claptrap Named " << _name << std::endl;
	std::cout << rst ;
}

ClapTrap & ClapTrap::operator =(ClapTrap const &inst)
{
	this->_name = inst._name;
	this->_hitPoints = inst._hitPoints;
	this->_energyPoints = inst._energyPoints;

	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->isWorking())
	{
		std::cout << "💥 " << this->_name << " attacks " << target;
		std::cout << ", causing " << this->_attackDamage << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isWorking())
	{
		std::cout << "🤕 " << this->_name << " takes " << amount;
		std::cout << " damage" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isWorking())
	{
		std::cout << "🔧 " << this->_name << " has been repaired " << amount;
		std::cout << " points" << std::endl;
		this->_energyPoints--;
		this->_hitPoints += amount;
	}
	else
		std::cout << "🚫 " << this->_name << " is not working" << std::endl;
}

bool	ClapTrap::isWorking(void)
{
	return (this->_energyPoints >= 0 && this->_hitPoints >= 0);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

std::string ClapTrap::getName(void)
{
	return (this->_name);
}

int		ClapTrap::getHp(void)
{
	return (this->_hitPoints);
}

void	ClapTrap::setHp(unsigned int amount)
{
	this->_hitPoints = amount;
}

int		ClapTrap::getEp(void)
{
	return (this->_energyPoints);
}

void	ClapTrap::setEp(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAt(unsigned int amount)
{
	this->_attackDamage = amount;
}

void	ClapTrap::substractEp(unsigned int amount)
{
	this->_energyPoints -= amount;
}

void	ClapTrap::showStatus(void)
{
	std::cout << "📊 " << this->_name << "[hP: " << this->getHp();
	std::cout << " | eP: " << this->getEp() << "]" << std::endl;
}



