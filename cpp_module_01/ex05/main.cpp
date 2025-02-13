#include "Harl.hpp"

int main(){
	Harl harl;
	std::cout<<"Harl DEBUG complain: \n";
	harl.complain("DEBUG");
	std::cout<<"\n";
	std::cout<<"Harl INFO complain: \n";
	harl.complain("INFO");
	std::cout<<"\n";
	std::cout<<"Harl WARNING complain: \n";
	harl.complain("WARNING");
	std::cout<<"\n";
	std::cout<<"Harl ERROR complain: \n";
	harl.complain("ERROR");
}