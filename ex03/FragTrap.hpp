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
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		
		FragTrap(const FragTrap &copy);

		FragTrap & operator =(FragTrap const &inst2);		
		
		void	highFivesGuys(void);
};

#endif
