#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() //:  ClapTrap(getName() + "_clap_name"), ScavTrap(getName() + "_scav_name"), FragTrap(getName() + "_frag_name")//:  ClapTrap(ClapTrap::getName() + "_clap_name"), ScavTrap(ScavTrap::getName() + "_scav_name"), FragTrap(FragTrap::getName() + "_frag_name")
/* 	ClapTrap(ClapTrap::getName() + "_clap_name");
	ScavTrap(ScavTrap::getName() + "_scav_name");
	FragTrap(FragTrap::getName() + "_frag_name"); */
{
	print(magenta);
	print("DiamonTrap Default Constructor");
	this->_name = "Unknow";

	setHp(FragTrap::_hit_points);////
	setEnergy(ScavTrap::_energy_point);////
	setAd(FragTrap::_attack_damage);////

	print("CLAPTRAP");
	nprint("ESTO es a claptrap hp10=");//MAL
	intprint(ClapTrap::getHp());
	nprint("ESTO es a claptrap Ep10=");//BIEN
	intprint(ClapTrap::getEp());
	nprint("ESTO es a claptrap Ad0=");//BIEN
	intprint(ClapTrap::getAd());

	print("SCAVTRAP");
	nprint("ESTO es a scavtrap hp100=");//MAL
	intprint(ScavTrap::getHp());
	nprint("ESTO es a scavtrap Ep50=");//BIEN
	intprint(ScavTrap::getEp());
	nprint("ESTO es a scavtrap Ad20=");//BIEN
	intprint(ScavTrap::getAd());

	print("FRAGTRAP");
	nprint("ESTO es a FragTrap hp100=");
	intprint(FragTrap::getHp());
	nprint("ESTO es a FragTrap Ep100=");
	intprint(FragTrap::getEp());
	nprint("ESTO es a FragTrap Ad30=");
	intprint(FragTrap::getAd());

	print("DIAMONDTRAP");
	nprint("ESTO es a DiamondTrap hp100=");
	intprint(DiamondTrap::getHp());
	nprint("ESTO es a DiamondTrap Ep50=");
	intprint(DiamondTrap::getEp());
	nprint("ESTO es a DiamondTrap Ad30=");
	intprint(DiamondTrap::getAd());

/* 	print("ESTO es a scavtrap Ad20=");//MAL
	intprint(ScavTrap::getAd());
	print("ESTO es a fragtrap Ep100=");//BIEN
	intprint(FragTrap::getEp());
	print("ESTO es a ScavTrap Ep50=");//BIEN
	intprint(ScavTrap::getEp()); */

/* 	nprint("setHp to:");
	intprint(getHp());
	nprint("setEp to:");
	intprint(getEp());
	nprint("setAd to:");
	intprint(getAd()); */
	print(rst);
}
DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name"),ScavTrap(name + "_scav_name")  , FragTrap(name + "_frag_name"),_name(name)
{

	//setName(name);
	_name = name;
	print(magenta);
	std::cout << "DiamonTrap Constructor " << _name << std::endl;
	//_name = name;///Ramdom1
	//this->_name = name;///Ramdom1
	//initName(name);//Diamantitos
	setHp(FragTrap::_hit_points);////
	setEnergy(ScavTrap::_energy_point);////
	setAd(FragTrap::_attack_damage);////

	print("CLAPTRAP");
	nprint("ESTO es a claptrap hp10=");//MAL
	intprint(ClapTrap::getHp());
	nprint("ESTO es a claptrap Ep10=");//BIEN
	intprint(ClapTrap::getEp());
	nprint("ESTO es a claptrap Ad0=");//BIEN
	intprint(ClapTrap::getAd());

	print("SCAVTRAP");
	nprint("ESTO es a scavtrap hp100=");//MAL
	intprint(ScavTrap::getHp());
	nprint("ESTO es a scavtrap Ep50=");//BIEN
	intprint(ScavTrap::getEp());
	nprint("ESTO es a scavtrap Ad20=");//BIEN
	intprint(ScavTrap::getAd());

	print("FRAGTRAP");
	nprint("ESTO es a FragTrap hp100=");
	intprint(FragTrap::getHp());
	nprint("ESTO es a FragTrap Ep100=");
	intprint(FragTrap::getEp());
	nprint("ESTO es a FragTrap Ad30=");
	intprint(FragTrap::getAd());

	print("DIAMONDTRAP");
	nprint("ESTO es a DiamondTrap hp100=");
	intprint(DiamondTrap::getHp());
	nprint("ESTO es a DiamondTrap Ep50=");
	intprint(DiamondTrap::getEp());
	nprint("ESTO es a DiamondTrap Ad30=");
	intprint(DiamondTrap::getAd());

/* 	print("ESTO es a scavtrap Ad20=");//MAL
	intprint(ScavTrap::getHp());
	print("ESTO es a fragtrap Ep100=");//BIEN
	intprint(FragTrap::getEp());
	print("ESTO es a ScavTrap Ep50=");//BIEN
	intprint(ScavTrap::getAd());
 */

/* 	nprint("setHp to:");
	intprint(getHp());
	nprint("setEp to:");
	intprint(getEp());
	nprint("setAd to:");
	intprint(getAd()); */
	print(rst);
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	ClapTrap::print("DiamonTrap Copy constructor");
	*this=copy;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << rojo;
	ClapTrap::print("DiamonTrap Destructor");
	std::cout << rst;
}
/* DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst1)
{
	print("operator= DiamonTrap called");
	this->_name = inst1._name;
	this->_hit_points = inst1._hit_points;
	this->_energy_point = inst1._energy_point;
	this->_attack_damage = inst1._attack_damage;

	return (*this);
} */
DiamondTrap & DiamondTrap::operator =(DiamondTrap const &inst1)
{
    print("operator= DiamonTrap called");
    this->_name = inst1._name;
    this->ScavTrap::_hit_points = inst1.ScavTrap::_hit_points;
    this->FragTrap::_energy_point = inst1.FragTrap::_energy_point;
    this->ScavTrap::_attack_damage = inst1.ScavTrap::_attack_damage;

    return (*this);
}

void DiamondTrap::whoAmI()
{
/* 	ClapTrap::print("START of whoAmI Function");
	//std::cout << "my name is " << _name << std::endl;
	std::cout << "my name is " << this->_name << std::endl;
	std::cout << "and my ClapTrap name is ";
	print(ClapTrap::_name);	//
	print("END whoAmI Function");
	//ClapTrap::print(ClapTrap::_name);		//da igual ino que otro */
		std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;


}

