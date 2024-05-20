#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		static const int			_scavEP = 50;
/* 		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage; */
	public:
		ScavTrap(void);									//canonical
		ScavTrap(std::string name);						//canonical
		~ScavTrap(void);								//canonical
		ScavTrap(const ScavTrap &copy);					//canonical
		ScavTrap & operator =(ScavTrap const &inst2);	//canonical
		

		int getScavEp();
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
