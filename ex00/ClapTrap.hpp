#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

# define RED "\033[31m" ///////////
class ClapTrap
{
	private:
		//private atributes of Claptrap
		int			_defaultHp;

		std::string _name;			
		int 		_hit_points;	//.. def 10
		int 		_energy_point;	//.. def 10
		int 		_attack_damage;	//.. def 0
	public:
					ClapTrap();						//canonical
					ClapTrap(std::string name);		//canonical
					ClapTrap(const ClapTrap &copy);	//canonical
					ClapTrap & operator=(ClapTrap const &inst2);//canonical
					~ClapTrap();					//canonical
		//SUBJECT FUNTIONS
		void 		attack(const std::string& target); 	//public member funtion subject
		void 		takeDamage(unsigned int amount); 	//public member funtion subject
		void 		beRepaired(unsigned int amount); 	//public member funtion subject
		/*SETTER*/
		void		setdefHp(int value);
		void 		setHp(int value);
		void		setEp(int value);
		void		setAd(int value);
		void		setName(std::string name);
		/*GETTER*/
		int			getdefHp() const;
		std::string getName() const ;
		int 		getHp() const;
		int 		getEp() const; 
		int 		getAd() const;
		/*VIEW STATS*/
		void 		viewstats();

		/*UTILITY FUNTIONS*/
		bool		isNegative(int value);
		void 		status(const ClapTrap& ramd, const ClapTrap& pepe);
		bool		is_die();
		bool		is_lowEnergy();
		void 		discountEnergy(const std::string& target);
		/*PRINTS*/
		void 		print(std::string s);
		void 		intprint(int n);
		void 		nprint(std::string s);
		/*COLORS*/
		std::string verde ;
		std::string amarillo ;
		std::string azul ;
		std::string magenta ;
		std::string cian ;
		std::string rojo ;
		std::string rst ;

};

#endif