
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
class ClapTrap
{
	protected:
		//private atributes of Claptrap
		int			_defaultHp;

		std::string _name;			
		int 		_hit_points;	//.. def 10
		int 		_energy_point;	//.. def 10
		int 		_attack_damage;	//.. def 0
	public:
					ClapTrap();						//canonical
					ClapTrap(std::string name);		//canonical
					~ClapTrap();					//canonical
					ClapTrap(const ClapTrap &copy);	//canonical
					ClapTrap & operator =(ClapTrap const &inst2);//canonical

		void 		attack(const std::string& target); 	//public member funtion subject
		void 		takeDamage(unsigned int amount); 	//public member funtion subject
		void 		beRepaired(unsigned int amount); 	//public member funtion subject

		std::string getName() const ;
		int			getdefHp() const;
		int 		getHp() const;
		int 		getEp() const; 
		int 		getAd() const;

		void 		status(const ClapTrap& ramd, const ClapTrap& pepe);
		bool		is_die();
		bool		is_lowEnergy();
		void 		discountEnergy(const std::string& target);

		void		setdefHp(int value);
		void 		setHp(int value);
		void		setEnergy(int value);
		void		setAd(int value);
		void		setName(std::string name);

		void 		print(std::string s);
		void 		intprint(int n);
		void 		nprint(std::string s);

		std::string verde ;
		std::string amarillo ;
		std::string azul ;
		std::string magenta ;
		std::string cian ;
		std::string rojo ;
		std::string rst ;

};

#endif