#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
	private:

		int			_defaultHp;

		std::string _name;			//private atributes of Claptrap
		int 		_hit_points;	//..
		int 		_energy_point;	//..
		int 		_attack_damage;	//..
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
		int			getdefHp() const;
		int 		getHp() const;
		int 		getEp() const; 
		int 		getAd() const;
		void 		status(const ClapTrap& ramd, const ClapTrap& pepe);

		bool		is_die();
		bool		is_lowEnergy();


		void 		setHp(int attackDamage);
		void 		setEnergy(const std::string& target);

		void 		print(std::string s);
		void 		intprint(int n);
		void 		nprint(std::string s);

};
//void status(const ClapTrap& ramd, const ClapTrap& pepe);
#endif
