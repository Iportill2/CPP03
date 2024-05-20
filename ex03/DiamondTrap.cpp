#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("Unknown_clap_name"), ScavTrap("Unknown_scav_name"), FragTrap("Unknown_frag_name") 
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";


	_name = "Unknown diamond_clap";
	setHp(FragTrap::_hit_points);
	setEp(ScavTrap::getScavEp()); //ScavTrap::_energy_point
	setAd(FragTrap::_attack_damage);

	setdefHp(FragTrap::_hit_points);
	std::cout << magenta ;
	std::cout << "Default Constructor DiamondTrap Named " << this->_name << std::endl;
	std::cout << rst ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name") 
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";

	_name += name +" diamond_clap"  ;
	setHp(FragTrap::_hit_points);
	setEp(ScavTrap::getScavEp()); //ScavTrap::_energy_point
	setAd(FragTrap::_attack_damage);

	setdefHp(FragTrap::_hit_points);
	std::cout << magenta ;
	std::cout << "Constructor DiamondTrap Named " << this->_name << std::endl;
	std::cout << rst ;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy),  ScavTrap(copy) ,FragTrap(copy)
{
	verde = "\033[32m";
	amarillo = "\033[33m";
	azul = "\033[34m";
	magenta = "\033[35m";
	cian = "\033[36m";
	rojo = "\033[31m";
	rst = "\033[0m";

	std::cout << "DiamondTrap copy constructor called "<< this->_name << std::endl;
	*this = copy;
}
DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst)
{
	print("DiamondTrap operator=");
	this->_name = inst._name;
	this->ClapTrap::_name = inst.ClapTrap::_name;
	this->FragTrap::_hit_points = inst.FragTrap::_hit_points;
	this->ScavTrap::_energy_point = inst.ScavTrap::_energy_point;
	this->FragTrap::_attack_damage = inst.FragTrap::_attack_damage;
	
	this->FragTrap::_defaultHp = inst.FragTrap::_defaultHp;

	return (*this);
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << rojo ;
	std::cout << "Destructor DiamondTrap Named " << this->_name << std::endl;
	std::cout << rst ;
}


void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
void DiamondTrap::status(const DiamondTrap& pjOne, const DiamondTrap& pjTwo) 
{
	std::cout << "[STATUS]" << std::endl;
	std::cout << magenta;

    std::cout << pjOne._name;
    std::cout << "|Health=" << pjOne.getHp();
    std::cout << "|Energy: " << pjOne.getEp();
    std::cout << "|Attack: " << pjOne.getAd() << std::endl;
    std::cout << pjTwo._name;
    std::cout << "|Health=" << pjTwo.getHp();
    std::cout << "|Energy: " << pjTwo.getEp();
    std::cout << "|Attack: " << pjTwo.getAd() << std::endl;
	print(rst);
}
