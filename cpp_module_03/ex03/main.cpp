#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout<<"\n";
		ScavTrap st1;
	}
	{
		std::cout<<"\n";
		FragTrap ft1;
	}
	{
		std::cout<<"\n";
		DiamondTrap dt1;
		dt1.whoAmI();

		std::cout<<"\n";

		DiamondTrap dt2("dt2");
		dt2.whoAmI();
		dt2.attack("dt1");
		dt1.takeDamage(30);
	}
	return 0; 
}