#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
int	main(void)
{
	{
		std::cout<<"\n";
		//default constructor
		FragTrap ft1;
	}
	{
		std::cout<<"\n";
		//parm constructor

		FragTrap ft2("ft2");

		//copy constructor
		//FragTrap st3(st2)
		FragTrap ft3=ft2;

		//attack test
		// std::cout<<"#attack test\n";
		// for(int i=1;i<=101;i++){
		// 	std::cout<<"attack "<<i<<"th tries: ";
		// 	ft3.attack("ft2");
		// 	ft2.takeDamage(30);
		// }

		//copy operator
		FragTrap ft4;
		ft4=ft2;

		//guardGate test
		// std::cout<<"#highFive test\n";
		// for(int i=1;i<=101;i++){
		// 	std::cout<<"highFive "<<i<<"th tries: ";
		// 	ft4.highFivesGuys();
		// }
	}
	{
		std::cout<<"\n";
		//virtual destructor test
		FragTrap *ptrFt2 = new FragTrap("ptrFt2");
		ClapTrap *adtCt2 = ptrFt2;
		delete adtCt2;
	}
	return 0; 
}