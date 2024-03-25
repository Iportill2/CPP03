#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
	private:
		std::string _name;
		int _hit_points;
		int _energy_point;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		int getHp();
		int getEp();
		int getAd();



		void 	print(std::string s);
		void 	intprint(int n);
		void 	nprint(std::string s);

		void setHp(int attackDamage);
		void setEnergy(const std::string& target);
		void status(const ClapTrap& ramd, const ClapTrap& pepe);

};
#endif

/*
When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
or energy points left.
5
C++ - Module 03 Inheritance
In all of these member functions, you have to print a message to describe what hap-
pens. For example, the attack() function may display something like (of course, without
the angle brackets):
ClapTrap <name> attacks <target>, causing <damage> points of damage!
The constructors and destructor must also display a message, so your peer-evaluators
can easily see they have been called.
Implement and turn in your own tests to ensure your code works as expected.
*/