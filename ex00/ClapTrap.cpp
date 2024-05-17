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
	print("ClapTrap Default Constructor");

	this->setdefHp(this->getHp());
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
	
	this->setdefHp(this->getHp());
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

	this->_defaultHp = inst._defaultHp;
	return (*this);
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = copy;
}
ClapTrap::~ClapTrap()
{
	//std::cout << rst;
	print("ClapTrap Destructor");
}
/////////////////SUBJECT FUNTIONS///////////////////
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
void ClapTrap::takeDamage(unsigned int amount)
{
	int damage = 0;
	damage += amount; 

	if(damage < 0 )
	{
		print(rojo);
		std::cout << "INVALID VALUE in TAKE DAMAGE:" << std::endl;
		print(rst);
		return;
	}
		if(this->_hit_points <= 0)
		{
			std::cout << rojo << this->getName() <<  " Its already dead!" << rst << std::endl;
			std::cout << this->getName() << " take " << amount << " damage" << std::endl;
			this->_hit_points-=amount;
			print(rst);
			return;
		}
	std::cout << rojo;
	std::cout << this->getName() << " take " << amount << " damage" << std::endl;
	this->_hit_points-=amount;
		if(this->_hit_points <= 0)
			 std::cout << rojo << this->getName() <<  " DIE!" << rst << std::endl;
	print(rst);
}

void ClapTrap::beRepaired(unsigned int amount)
{

	int healed = 0;
	healed += amount; 

	if(healed < 0 )
	{
		print(rojo);
		std::cout << "INVALID VALUE in BE REPAIRED:" << std::endl;
		print(rst);
		return;
	}

	std::cout << "amount:" << amount << std::endl;

	std::cout << "defHP:"<< this->getdefHp() << std::endl;
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
		print(azul);
		if((this->_hit_points + healed) >= this->getdefHp())
		{
			//std::cout << "1healedPRE:"<< healed << std::endl;
			healed = this->getdefHp() - getHp();
			//std::cout << "1healed:"<< healed << std::endl;
		}
		else
		{
			//std::cout << "2healed:"<< healed << std::endl;
		}
		this->_hit_points += healed;

			std::cout << this->getName();
			std::cout << " Heals ";
			intprint(healed);
			std::cout <<"Total Hp = ";
			intprint(this->getHp());
			this->discountEnergy(this->getName());
	}
	print(rst);
}
////////////////SETTERS////////////////////
void	ClapTrap::setdefHp(int value)
{
	if(isNegative(value) == true)
	{
		std::cout << RED << "INVALID SetdefHP Value" << rst << std::endl;
		return;
	}
	this->_defaultHp = value;
}

void ClapTrap::setHp(int value) 
{   
	if(isNegative(value) == true)
	{
		std::cout << RED << "INVALID SetHP Value" << rst << std::endl;
		return;
	}
    this->_hit_points = value;
	this->_defaultHp = value;
}
void ClapTrap::setEp(int value)
{
	if(isNegative(value) == true)
	{
		std::cout << RED << "INVALID SetEp Value" << rst << std::endl;
		return;
	}
	this->_energy_point=value;
}
void		ClapTrap::setAd(int value)
{
	if(isNegative(value) == true)
	{
		std::cout << RED << "INVALID SetAd Value" << rst << std::endl;
		return;
	}
	this->_attack_damage=value;
}
void		ClapTrap::setName(std::string name)
{
	this->_name=name;
}

////////////////GETTERS////////////////////
int ClapTrap::getdefHp() const
{
	return(this->_defaultHp);
}

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
/////////////VIEW STATS///////////////////////
void ClapTrap::viewstats()
{
	std::cout << "Claptrap Name:" << this->getName() << std::endl;
	std::cout << "Claptrap HP:" << this->getHp() << std::endl;
	std::cout << "Claptrap EP:" << this->getEp() << std::endl;
	std::cout << "Claptrap AD:" << this->getAd() << std::endl<< std::endl;
}
/////////////////UTILITY FUNTIONS///////////////////

bool	ClapTrap::isNegative(int value)
{
	if(value < 0)
		return(true);
	else
		return(false);
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

///////////PRINTS/////////////

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

