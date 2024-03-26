#include "ClapTrap.hpp"
std::string verde = "\033[32m";
std::string amarillo = "\033[33m";
std::string azul = "\033[34m";
std::string magenta = "\033[35m";
std::string cian = "\033[36m";
std::string rojo = "\033[31m";
std::string rst = "\033[0m";

ClapTrap::ClapTrap() : _name("Ramdom"),_hit_points(10),_energy_point(10),_attack_damage(0)
{	
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
	std::cout << "" << std::endl;
	std::cout << rst;
}
ClapTrap::ClapTrap(std::string name) : _name(name),_hit_points(10),_energy_point(10),_attack_damage(0)
{
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
	std::cout << "" << std::endl;
	std::cout << rst;
}
ClapTrap & ClapTrap::operator =(ClapTrap const &inst2)
{
	this->_name = inst2._name;
	this->_hit_points = inst2._hit_points;
	this->_energy_point = inst2._energy_point;

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
void ClapTrap::intprint(int n)
{
	std::cout << n << std::endl;
}
void ClapTrap::print(std::string s)
{
	std::cout << s << std::endl;
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
void ClapTrap::nprint(std::string s)
{
	std::cout << s;
}
void ClapTrap::setHp(int attackDamage) 
{   
    std::cout << verde << "HP **ANTES** del golpe = " << rst;
    intprint(getHp());
    _hit_points -= attackDamage;
    std::cout << cian <<  "HP **DESPUES** del golpe = " << rst;
    intprint(getHp());

}
void ClapTrap::setEnergy(const std::string& target)
{	
	if(getEp()<= 0)
	{
		print("Low on energy");
	}
	else
	{
		_energy_point --;
		std::cout <<"Resta 1 de energia con setEnergy a " << target << std::endl;
	}
}
bool ClapTrap::Able_to_attack()
{
	if(_energy_point >= 1 && _hit_points >= 1)
		return(true);
	else
		return(false);
}
void ClapTrap::attack(const std::string& target)
{
	std::cout << rojo;
	if(Able_to_attack() == false)
	{
		nprint(_name);
		print(" cannot attack");
	}
	else
	{
		std::cout << rst;
		nprint("ClapTrap ");
		nprint(_name);
		nprint(" attacks ");
		nprint(target);
		nprint(" causing ");
		std::cout << _attack_damage;
		print(" points of damage!");
		//std::cout <<"Energy=";
		setEnergy(target);
		//std::cout <<"attack damage=";
		setHp(_attack_damage);
		_energy_point --;
	}
}

void ClapTrap::status(const ClapTrap& ramd, const ClapTrap& pepe) 
{
	std::cout << magenta;
    std::cout << "Ramd" ;
    std::cout << "|Health=" << ramd.getHp();
    std::cout << "|Energy: " << ramd.getEp();
    std::cout << "|Attack: " << ramd.getAd() << std::endl;

    std::cout << pepe.getName() ;
    std::cout << "|Health=" << pepe.getHp();
    std::cout << "|Energy: " << pepe.getEp();
    std::cout << "|Attack: " << pepe.getAd() << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " take " << amount << " damage" << std::endl;
	_hit_points-=amount;
	if(_hit_points <= 0)
		 std::cout << rojo << getName() <<  " DIE!" << rst << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	print(rojo);
	std::cout << "se cura ";
	intprint(amount);
	std::cout <<"total de vida=";
	_hit_points+= amount;
	intprint(_hit_points);
	print(rst);
}

