
#include "DiamondTrap.hpp"
int main()
{
	DiamondTrap	diamantito("Diamantito");
	DiamondTrap	diamantita;
	diamantito.whoAmI();
	diamantita.whoAmI();
	diamantita.attack(diamantito.getName());
	diamantito.attack(diamantita.getName());
	return (0);
}

