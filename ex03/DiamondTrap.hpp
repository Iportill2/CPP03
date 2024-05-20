#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);									//canonical
		DiamondTrap(std::string name);						//canonical
		DiamondTrap(const DiamondTrap &copy);				//canonical
		DiamondTrap & operator =(DiamondTrap const &inst);	//canonical
		~DiamondTrap(void);									//canonical
		
		void status(const DiamondTrap& pjOne, const DiamondTrap& pjTwo); 

		using 	ScavTrap::attack;
		void	whoAmI(void);
		/*COLORS*/
		std::string verde ;
		std::string amarillo ;
		std::string azul ;
		std::string magenta ;
		std::string cian ;
		std::string rojo ;
		std::string rst ;
};

#endif
