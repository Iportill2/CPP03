#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int 		_hitPoints;
		int 		_energyPoints;
		int 		_attackDamage;

	public:
		ClapTrap(void);									//canonical
		ClapTrap(std::string name);						//canonical
		~ClapTrap(void);								//canonical
		ClapTrap(const ClapTrap &copy);					//canonical
		ClapTrap & operator =(ClapTrap const &inst);	//canonical
		
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		bool		isWorking(void);
		
		std::string getName(void);
		void		setName(std::string name);
		
		int			getHp(void);
		void		setHp(unsigned int amount);
		
		int			getEp(void);
		void		setEp(unsigned int amount);
		void		substractEp(unsigned int amount);
		
		void		setAt(unsigned int amount);
		void		showStatus(void);

		std::string verde ;
		std::string amarillo ;
		std::string azul ;
		std::string magenta ;
		std::string cian ;
		std::string rojo ;
		std::string rst ;
};

#endif
