#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	setHp(100);
	setEp(100);
	setAt(30);
	
	/*this->setHp(100);
	this->setEp(100);
	this->setAt(30);*/
	std::cout << cian ;
	std::cout << "Default Constructor FragTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
	//std::cout << "FragTrap (Default) 👾 : " << this->getName() << " assembled!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	setHp(100);
	setEp(100);
	setAt(30);
	
	/*this->setHp(100);
	this->setEp(100);
	this->setAt(30);*/
	std::cout << cian ;
	std::cout << "Constructor FragTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap ⚙️ Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap(void)
{
	std::cout << rojo ;
	std::cout << "Destructor FragTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
	//std::cout << "FragTrap " << this->getName() << " 👎" << std::endl;
}

FragTrap & FragTrap::operator =(FragTrap const &inst2)
{
	this->_name = inst2._name;
	this->_hitPoints = inst2._hitPoints;
	this->_energyPoints = inst2._energyPoints;
	this->_attackDamage = inst2._attackDamage;
	this->_defaultHp = inst2._defaultHp;

	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " 📢 GIVE ME 5 MTHRFKR! 🖐🖐🖐🖐🖐" << std::endl;
}
