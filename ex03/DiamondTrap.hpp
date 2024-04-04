#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);						//canonical
		DiamondTrap(std::string name);			//canonical
		~DiamondTrap(void);						//canonical
		DiamondTrap(const DiamondTrap &copy);	//canonical
		
		using 	ScavTrap::attack;
		void	whoAmI(void);
};

#endif
