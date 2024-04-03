#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap						//public claptrap
{
	private:

	public:
					ScavTrap();							//canonical
					ScavTrap(std::string name);			//canonical
					ScavTrap(const ScavTrap &copy);		//canonical
					~ScavTrap();						//canonical
		ScavTrap & 	operator =(ScavTrap const &inst);	//canonical
		
		void 		guardGate();						//public member funtion subject
};
#endif
