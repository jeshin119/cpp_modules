#include "DiamondTrap.hpp"
#include <iostream>

const unsigned int DiamondTrap::_kHitPoint=100;
const unsigned int DiamondTrap::_kEnergyPoint=50;
const unsigned int DiamondTrap::_kAttackDamage=30;

DiamondTrap::DiamondTrap()
:ClapTrap("noName_clap_name",_kHitPoint,_kEnergyPoint,_kAttackDamage),_name("noName"){
	std::cout<<"DiamondTrap(): "<<_name<<"\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
:ClapTrap(name+"_clap_name",_kHitPoint,_kEnergyPoint,_kAttackDamage),_name(name){
    std::cout<<"DiamondTrap(name): "<<_name<<"\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs)
:ClapTrap(rhs._name+"_clap_name", rhs._hitPoint, rhs._energyPoint, rhs._attackDamage){
    std::cout<<"DiamondTrap(rhs): "<<_name<<"\n";
}

DiamondTrap::~DiamondTrap(){
    std::cout<<"~DiamondTrap(): "<<_name<<"\n";
}

void    DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void    DiamondTrap::takeDamage(unsigned int amount){
    if (_hitPoint<=amount){
        _hitPoint=0;
        std::cout<<"DiamondTrap "<<_name<<" takes "<<amount<<" damage and It dies.\n";
        return ;
    }
    _hitPoint-=amount;
    std::cout<<"DiamondTrap "<<_name<<" takes "<<amount<<" damage ";
    std::cout<<"and now It has "<<_hitPoint<<" hit points.\n";
}

void    DiamondTrap::beRepaired(unsigned int amount){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    _hitPoint+=amount;
    std::cout<<"DiamondTrap "<<_name<<" is repaired by "<<amount;
    std::cout<<", "<<"now It has "<<_hitPoint<<" hitpoint.\n";
}

void	DiamondTrap::whoAmI(){
	std::cout<<"whoAmI(): ";
	std::cout<<"ClapTrap "<<ClapTrap::_name<<", ";
	std::cout<<"DiamondTrap "<<_name<<": {";
	std::cout<<"hitPoint: "<<_hitPoint<<", ";
	std::cout<<"energyPoint: "<<_energyPoint<<", ";
	std::cout<<"attackDamage: "<<_attackDamage<<"}\n";
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs){
    std::cout<<"DiamondTrap::operator=(const DiamondTrap&): "<< _name<<"\n";
	ClapTrap::_name = rhs._name+"_clap_name";
	_name = rhs._name;
    _hitPoint = rhs._hitPoint;
    _energyPoint = rhs._energyPoint;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

bool    DiamondTrap::_checkCanDoSomething() const{
    if (!_hitPoint){
        std::cout<<"DiamondTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero hit point\n";
        return (false);
    }
    if (!_energyPoint){
        std::cout<<"DiamondTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero energy point\n";
        return (false);
    }
    return (true);
}