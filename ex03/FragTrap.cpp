#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()//, _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	setHp(100);
	setEp(100);
	setAd(30);
	
	setdefHp(FragTrap::_hit_points);
	/*this->setHp(100);
	this->setEp(100);
	this->setAt(30);*/
	std::cout << cian ;
	std::cout << "Default Constructor FragTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
	//std::cout << "FragTrap (Default) 👾 : " << this->getName() << " assembled!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)//, _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	setHp(100);
	setEp(100);
	setAd(30);
	
	setdefHp(FragTrap::_hit_points);
	/*this->setHp(100);
	this->setEp(100);
	this->setAt(30);*/
	std::cout << cian ;
	std::cout << "Constructor FragTrap Named " << this->getName() << std::endl;
	std::cout << rst ;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap ⚙️ Copy constructor called "<< this->_name << std::endl;
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
	print("FragTrap operator=");
	this->_name = inst2._name;
	this->_hit_points = inst2._hit_points;
	this->_energy_point = inst2._energy_point;
	this->_attack_damage = inst2._attack_damage;
	this->_defaultHp = inst2._defaultHp;

	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " 📢 GIVE ME 5 MTHRFKR! 🖐🖐🖐🖐🖐" << std::endl;
}
