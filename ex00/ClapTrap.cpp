#include "ClapTrap.hpp"
ClapTrap::ClapTrap() : _name("Ramdom"),_hit_points(10),_energy_point(10),_attack_damage(0)
{
	print("called to Default Destructor");
	print(getName());
	intprint(getHp());
	intprint(getEp());
	intprint(getAd());

}
ClapTrap::ClapTrap(std::string name) : _name(name),_hit_points(10),_energy_point(10),_attack_damage(0)
{
	print("called to Constructor");
	print(getName());
	intprint(getHp());
	intprint(getEp());
	intprint(getAd());
}
ClapTrap::~ClapTrap()
{
	print("called to Destructor");
}
void ClapTrap::intprint(int n)
{
	std::cout << n << std::endl;
}
void ClapTrap::print(std::string s)
{
	std::cout << s << std::endl;
}
std::string ClapTrap::getName()
{
	return(_name);
}
int ClapTrap::getHp()
{
	return(_hit_points);
}
int ClapTrap::getEp()
{
	return(_energy_point);
}
int ClapTrap::getAd()
{
	return(_attack_damage);
}
void ClapTrap::nprint(std::string s)
{
	std::cout << s;
}
void ClapTrap::setHp(int attackDamage)
{	intprint(getHp());
	_hit_points -= attackDamage;
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
		std::cout <<"Resta 1 de energia con setEnergy a:" << target;
	}

}
void ClapTrap::attack(const std::string& target)
{
	nprint("ClapTrap ");
	nprint(_name);
	nprint(" attacks ");
	nprint(target);
	nprint(" causing ");
	std::cout << _attack_damage;
	print(" points of damage!");

	setEnergy(target);
	setHp(_attack_damage);

	_attack_damage++;//set nuevos valores
	_energy_point --;
}

void ClapTrap::status(const ClapTrap& ramd, const ClapTrap& pepe) 
{
    // Asumiendo que getName, getHealth, getEnergy y getAttack son métodos de acceso en la clase ClapTrap
    std::cout << "Ramd: " << std::endl;
    std::cout << "Name: " << ramd.getName() << std::endl;
    std::cout << "Health: " << ramd.getHealth() << std::endl;
    std::cout << "Energy: " << ramd.getEnergy() << std::endl;
    std::cout << "Attack: " << ramd.getAttack() << std::endl;

    std::cout << "Pepe: " << std::endl;
    std::cout << "Name: " << pepe.getName() << std::endl;
    std::cout << "Health: " << pepe.getHealth() << std::endl;
    std::cout << "Energy: " << pepe.getEnergy() << std::endl;
    std::cout << "Attack: " << pepe.getAttack() << std::endl;
}