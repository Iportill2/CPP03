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

	std::cout << rojo;
	print("called to Default Destructor");
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
	std::cout << rst;

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
	
	std::cout << verde;
	print("called to Constructor");
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
	std::cout << rst;
}
ClapTrap & ClapTrap::operator =(ClapTrap const &inst)
{
	this->_name = inst._name;
	this->_hit_points = inst._hit_points;
	this->_energy_point = inst._energy_point;
	return (*this);
}
ClapTrap::~ClapTrap()
{
	std::cout << cian;
	print("called to Destructor");
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "⚙️ Copy constructor called" << std::endl;
	*this = copy;
}
std::string ClapTrap::getName() const 
{
	return(_name);
}
int ClapTrap::getHp() const
{
	return(_hit_points);
}
int ClapTrap::getEp() const
{
	return(_energy_point);
}
int ClapTrap::getAd() const
{
	return(_attack_damage);
}
void ClapTrap::setHp(int attackDamage) 
{   
    _hit_points -= attackDamage;
}
void ClapTrap::setEnergy(const std::string& target)
{	
	(void)target;
	if(getEp()<= 0)
		print("Low on energy");
	else
	{
		_energy_point --;
		std::cout <<"Spend 1 of energy with setEnergy to " << getName() << std::endl;
	}
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << rojo;
	if(is_die() == true)
	{
		nprint(getName());
		print(" cannot attack because is die");
		return;
	}
	if(is_lowEnergy() == true)
	{
		nprint(getName());
		print(" cannot attack because is low of energy");
		return;
	}
	else
	{
		std::cout << rst;
		nprint("ClapTrap ");
		nprint(getName());
		nprint(" attacks ");
		nprint(target);
		nprint(" causing ");
		std::cout << getAd();
		print(" points of damage!");
		setEnergy(getName());
	}
	print(rst);
}
bool ClapTrap::is_die()
{
	if(_hit_points >= 1)
		return(false);
	else
		return(true);
}
bool ClapTrap::is_lowEnergy()
{
	if(_energy_point >= 1)
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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " take " << amount << " damage" << std::endl;
	_hit_points-=amount;
	if(_hit_points <= 0)
		 std::cout << rojo << getName() <<  " DIE!" << rst << std::endl;
	print(rst);
}
void	ClapTrap::setdefHp(int value)
{
	_defaultHp = value;
}

int ClapTrap::getdefHp() const
{
	return(_defaultHp);
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(is_die() == true)
	{
		nprint(getName());
		print(" cannot be Repaired because is die");
		return;
	}
	if(is_lowEnergy() == true)
	{
		nprint(getName());
		print(" cannot be Repaired because is low of energy");
		return;
	}
	else
	{
		print(rojo);
		std::cout << getName();
		std::cout << " Heals ";
		intprint(amount);
		std::cout <<"Total Hp = ";
		_hit_points+= amount;
		if(getHp() > getdefHp())
			_hit_points = _defaultHp;
		intprint(getHp());
		setEnergy(getName());
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

