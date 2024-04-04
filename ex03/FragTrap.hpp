#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ScavTrap.hpp"

class FragTrap :virtual public ClapTrap
{
	private:
	
	public:
					FragTrap();						//canonical
					FragTrap(std::string name);		//canonical
					FragTrap(const FragTrap &copy);	//canonical
					~FragTrap();					//canonical
		FragTrap & 	operator =(FragTrap const &inst2);//canonical

		void 		highFivesGuys(void);
};
#endif
