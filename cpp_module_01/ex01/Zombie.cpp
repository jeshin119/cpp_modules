#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout<<"Zombie()"<<"\n";
}
Zombie::Zombie(std::string paramName){
	_name=paramName;
}
Zombie::~Zombie(){
	std::cout<<_name<<" is destoryed\n";
}
void	Zombie::announce(void){
	std::cout<<_name<<": BraiiiiiiinnnzzzZ...\n";
}
void	Zombie::setName(std::string paramName){
	_name = paramName;
}