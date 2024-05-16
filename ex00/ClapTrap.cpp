#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : _name("Ramdom"),_hit_points(10),_energy_point(10),_attack_damage(0) 
{	
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";
	print("ClapTrap Default Destructor");

/* 	std::cout << rojo;
	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	setdefHp(getHp());
	std::cout << std::endl;
	std::cout << rst; */

}
ClapTrap::ClapTrap(std::string name) : _name(name),_hit_points(10),_energy_point(10),_attack_damage(0)
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";
	print("ClapTrap Constructor");
	
/* 	std::cout << verde;
	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	setdefHp(getHp());
	std::cout << std::endl;
	std::cout << rst; */
}
ClapTrap & ClapTrap::operator =(ClapTrap const &inst)
{
	print("ClapTrap operator=");
	this->_name = inst._name;
	this->_hit_points = inst._hit_points;
	this->_energy_point = inst._energy_point;
	this->_attack_damage = inst._attack_damage;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	//std::cout << rst;
	//print("ClapTrap Destructor");
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
}
////////////////////////////////////
void ClapTrap::viewstats()
{
	std::cout << "Claptrap Name:" << this->getName() << std::endl;
	std::cout << "Claptrap HP:" << this->getHp() << std::endl;
	std::cout << "Claptrap EP:" << this->getEp() << std::endl;
	std::cout << "Claptrap AD:" << this->getAd() << std::endl<< std::endl;
}
////////////////GETTERS////////////////////
std::string ClapTrap::getName() const 
{
	return(this->_name);
}
int ClapTrap::getHp() const
{
	return(this->_hit_points);
}
int ClapTrap::getEp() const
{
	return(this->_energy_point);
}
int ClapTrap::getAd() const
{
	return(this->_attack_damage);
}
////////////////SETTERS////////////////////
void ClapTrap::setHp(int value) 
{   
    this->_hit_points = value;
}
void		ClapTrap::setName(std::string name)
{
	this->_name=name;
}
void		ClapTrap::setAd(int value)
{
	this->_attack_damage=value;
}
void ClapTrap::setEp(int value)
{
	this->_energy_point=value;
}
////////////////////////////////////
void ClapTrap::discountEnergy(const std::string& target)
{	
	if(this->getEp()<= 0)
		std::cout << target << "is Low on energy" << std::endl;
	else
	{
		this->_energy_point --;
		std::cout << this->getName() <<" Spend 1 of energy"  << std::endl;
	}
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << rojo;
	if(this->is_die() == true)
	{
		nprint(this->getName());
		print(" cannot attack because is die");
		std::cout << rst;
		return;
	}
	if(this->is_lowEnergy() == true)
	{
		nprint(this->getName());
		print(" cannot attack because is low of energy");
		std::cout << rst;
		return;
	}
	else
	{
		std::cout << rst;
		nprint("ClapTrap ");
		nprint(this->getName());
		nprint(" attacks ");
		nprint(target);
		nprint(" causing ");
		std::cout << this->getAd();
		print(" points of damage!");
		this->discountEnergy(this->getName());
	}
	print(rst);
}

bool ClapTrap::is_die()
{
	if(this->_hit_points >= 1)
		return(false);
	else
		return(true);
}
bool ClapTrap::is_lowEnergy()
{
	if(this->_energy_point >= 1)
		return(false);
	else
		return(true);
}

void ClapTrap::status(const ClapTrap& pjOne, const ClapTrap& pjTwo) 
{
	std::cout << magenta;
    std::cout << pjOne.getName();
    std::cout << "|Health=" << pjOne.getHp();
    std::cout << "|Energy: " << pjOne.getEp();
    std::cout << "|Attack: " << pjOne.getAd() << std::endl;
    std::cout << pjTwo.getName();
    std::cout << "|Health=" << pjTwo.getHp();
    std::cout << "|Energy: " << pjTwo.getEp();
    std::cout << "|Attack: " << pjTwo.getAd() << std::endl;
	print(rst);
}
void ClapTrap::doAttack(ClapTrap Target)
{
	if((this->is_die() == false) && this->is_lowEnergy() )
	{
		this->attack(Target._name);
		Target.takeDamage(this->getAd());
	}
}
void ClapTrap::doRepair(ClapTrap Target,unsigned int amount )
{
	if((this->is_die() == false) && this->is_lowEnergy() )
		Target.beRepaired(amount);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->_hit_points <= 0)
	{
		std::cout << rojo << this->getName() <<  " Its already dead!" << rst << std::endl;
		std::cout << this->getName() << " take " << amount << " damage" << std::endl;
		this->_hit_points-=amount;
		print(rst);
		return;
	}
	std::cout << this->getName() << " take " << amount << " damage" << std::endl;
	this->_hit_points-=amount;
	if(this->_hit_points <= 0)
		 std::cout << rojo << this->getName() <<  " DIE!" << rst << std::endl;
	print(rst);
}
void	ClapTrap::setdefHp(int value)
{
	this->_defaultHp = value;
}

int ClapTrap::getdefHp() const
{
	return(this->_defaultHp);
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->is_die() == true)
	{
		nprint(getName());
		print(" cannot be Repaired because is die");
		return;
	}
	if(this->is_lowEnergy() == true)
	{
		nprint(this->getName());
		print(" cannot be Repaired because is low of energy");
		return;
	}
	else
	{
		print(rojo);
		std::cout << this->getName();
		std::cout << " Heals ";
		intprint(amount);
		std::cout <<"Total Hp = ";
		_hit_points+= amount;
		if(this->getHp() > this->getdefHp())
			_hit_points = _defaultHp;
		intprint(this->getHp());
		this->discountEnergy(this->getName());
	}
	print(rst);
}
void ClapTrap::intprint(int n)
{
	std::cout << n << std::endl;
}
void ClapTrap::print(std::string s)
{
	std::cout << s << std::endl;
}
void ClapTrap::nprint(std::string s)
{
	std::cout << s;
}

