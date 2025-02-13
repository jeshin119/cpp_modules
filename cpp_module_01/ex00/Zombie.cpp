#include "Zombie.hpp"

Zombie::Zombie(){
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