#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap					//public claptrap
{
	protected:
		int 		_hit_points;	//.. def 10
		int 		_energy_point;	//.. def 10
		int 		_attack_damage;	//.. def 0
	public:
					ScavTrap();							//canonical
					ScavTrap(std::string name);			//canonical
					ScavTrap(const ScavTrap &copy);		//canonical
					~ScavTrap();						//canonical
		ScavTrap & 	operator =(ScavTrap const &inst);	//canonical
		
		void 		guardGate();						//public member funtion subject
};
#endif
