#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
	public:
		ScavTrap(void);									//canonical
		ScavTrap(std::string name);						//canonical
		~ScavTrap(void);								//canonical
		ScavTrap(const ScavTrap &copy);					//canonical
		ScavTrap & operator =(ScavTrap const &inst2);	//canonical
		
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
