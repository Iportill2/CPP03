#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()//, _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	setHp(100);
	setEp(50);
	setAd(20);
	
	setdefHp(_hit_points);
	/*this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	*/
	//this->setName("Unknown");
	//std::cout << "Default SC4V-TP has been created 🚧 Codename: " << this->getName() << std::endl;

	std::cout << verde ;
	std::cout << "Default Constructor ScavTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)//, _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	setHp(100);
	setEp(50);
	setAd(20);

	setdefHp(_hit_points);
	/*this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;*/
	std::cout << verde ;
	std::cout << "Constructor ScavTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
	//std::cout << "SC4V-TP has been created 🚧 Codename: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "SC4V-TP ⚙️ Copy constructor called "<< this->_name << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << rojo ;
	std::cout << "Destructor ScavTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
	//std::cout << "SC4V-TP 😵 " << this->getName() << " shutdown ☠️" << std::endl;
}

ScavTrap & ScavTrap::operator =(ScavTrap const &inst2)
{
	print("ScavTrap operator=");
	this->_name = inst2._name;
	this->_hit_points = inst2._hit_points;
	this->_energy_point = inst2._energy_point;
	this->_attack_damage = inst2._attack_damage;
	this->_defaultHp = inst2._defaultHp;

	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHp() > 0 && this->getEp() > 0) 
	{
		std::cout << "🪓 SC4V-TP " << this->getName() << " attacks " << target;
		std::cout << std::endl;
		this->setEp(this->getEp() - 1);
	}
	else
		std::cout << "🚫 " << this->getName() << " is not working" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in Gate Keeper mode 🥅" << std::endl;
}
int ScavTrap::getScavEp()
{
	return(this->_scavEP);
}