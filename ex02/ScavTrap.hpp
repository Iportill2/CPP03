#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
	private:

	public:
					ScavTrap();						//canonical
					ScavTrap(std::string name);		//canonical
					ScavTrap(const ScavTrap &copy);	//canonical
					~ScavTrap();					//canonical
		ScavTrap & 	operator =(ScavTrap const &inst1);//canonical
		
		void 		guardGate();
};
#endif
