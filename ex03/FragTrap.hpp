#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	
	public:
		FragTrap(void);									//canonical
		FragTrap(std::string name);						//canonical
		~FragTrap(void);								//canonical
		FragTrap(const FragTrap &copy);					//canonical
		FragTrap & operator =(FragTrap const &inst2);	//canonical
		
		void	highFivesGuys(void);
};

#endif
