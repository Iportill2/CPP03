#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
	private:
		std::string _name;
		int 		_hit_points;
		int 		_energy_point;
		int 		_attack_damage;
	public:
					ClapTrap();						//canonical
					ClapTrap(std::string name);		//canonical
					~ClapTrap();					//canonical
					ClapTrap(const ClapTrap &copy);	//canonical
					ClapTrap & operator =(ClapTrap const &inst2);//canonical

		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

		std::string getName() const ;
		int 		getHp() const;
		int 		getEp() const; 
		int 		getAd() const;
		void 		status(const ClapTrap& ramd, const ClapTrap& pepe);

		bool 		Able_to_attack();

		void 		print(std::string s);
		void 		intprint(int n);
		void 		nprint(std::string s);

		void 		setHp(int attackDamage);
		void 		setEnergy(const std::string& target);

};
//void status(const ClapTrap& ramd, const ClapTrap& pepe);
#endif
