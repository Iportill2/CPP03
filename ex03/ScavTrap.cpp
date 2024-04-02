#include "ScavTrap.hpp"

std::string verde1 = "\033[32m";
std::string amarillo1 = "\033[33m";
std::string azul1 = "\033[34m";
std::string magenta1 = "\033[35m";
std::string cian1 = "\033[36m";
std::string rojo1 = "\033[31m";
std::string rst1 = "\033[0m";

ScavTrap::ScavTrap() :  ClapTrap()
{
	print("ScavTrap Default Constructor Created!");
	//this->initName("ScavTrapName");
	initHp(100);
	initEnergy(50);
	initAd(20);

	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd());
	std::cout << "" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor Created with name " << _name << std::endl;
	initHp(100);
	initEnergy(50);
	initAd(20);

/* 	nprint("setname to:");
	print(getName());
	nprint("setHP to:");
	intprint(getHp());
	nprint("setEP to:");
	intprint(getEp());
	nprint("setAD to:");
	intprint(getAd()); */
}
ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "⚙️ Copy constructor called" << std::endl;
	*this = copy;
}
ScavTrap::~ScavTrap()
{
	print("ScavTrap Destructor Created!");
}

ScavTrap & ScavTrap::operator =(ScavTrap const &inst1)
{
	this->_name = inst1._name;
	this->_hit_points = inst1._hit_points;
	this->_energy_point = inst1._energy_point;
	this->_attack_damage = inst1._attack_damage;

	return (*this);
}
void ScavTrap::guardGate()
{
	print(rojo1);
	nprint(_name);
	nprint(" is now in Gate keeper mode!!");
	print(rst1);
}