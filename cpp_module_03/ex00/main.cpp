#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap ct1("ct1");
	ClapTrap ct2("ct2");
	ClapTrap ct3("ct3");

	std::cout<<"\n";

	ct1.attack("ct2");
	ct2.takeDamage(0);
	ct2.beRepaired(10);

	std::cout<<"\n";
	ct1.attack("ct3");
	ct3.takeDamage(100);
	ct3.beRepaired(10);

	std::cout<<"\n";
	return 0; 
}