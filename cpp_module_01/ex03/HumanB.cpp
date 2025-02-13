#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _weapon(NULL),_name(name){}
HumanB::~HumanB(){
}
void	HumanB::attack(){
	if (_weapon==NULL)
		return ;
	std::cout<<_name<<" attacks with their "<<_weapon->getType()<<"\n";
}
void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}