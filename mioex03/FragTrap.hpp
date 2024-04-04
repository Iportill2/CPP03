#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"

class FragTrap :virtual public ClapTrap
{
	protected:
		int 		_hit_points;	//.. def 10
		int 		_energy_point;	//.. def 10
		int 		_attack_damage;	//.. def 0
	
	public:
					FragTrap();						//canonical
					FragTrap(std::string name);		//canonical
					FragTrap(const FragTrap &copy);	//canonical
					~FragTrap();					//canonical
		FragTrap & 	operator =(FragTrap const &inst2);//canonical

		void 		highFivesGuys(void);
};
#endif
