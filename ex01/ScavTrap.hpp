#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
	private:

	public:
					ScavTrap();						//canonical
					ScavTrap(std::string name);		//canonical
					ScavTrap(const ScavTrap &copy);	//canonical
					~ScavTrap();					//canonical
		ScavTrap & operator =(ScavTrap const &inst2);//canonical
		
		void 		guardGate();
		void		attack(const std::string &target);

		void print(std::string s);
		void nprint(std::string s);

};
#endif
/*
Because you can never have enough ClapTraps, you will now create a derived robot.
It will be named ScavTrap and will inherit the constructors and destructor from Clap-
Trap. However, its constructors, destructor and attack() will print different messages.
After all, ClapTraps are aware of their individuality.
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?
ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
must initialize them to:
•Name, which is passed as parameter to a constructor
•Hit points (100), represent the health of the ClapTrap
•Energy points (50)
•Attack damage (20)
ScavTrap will also have its own special capacity:
void guardGate();
This member function will display a message informing that ScavTrap is now in Gate
keeper mode.
Don’t forget to add more tests to your program.
7

*/