#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
:_name("noName"),_hitPoint(10),_energyPoint(10),_attackDamage(0){
    std::cout<<"ClapTrap(): "<< _name<<"\n";
}

ClapTrap::ClapTrap(std::string name)
:_name(name),_hitPoint(10),_energyPoint(10),_attackDamage(0){
    std::cout<<"ClapTrap(name): "<< _name<<"\n";
}

ClapTrap::ClapTrap(std::string name
                    , unsigned int hitPoint
                    , unsigned int energyPoint
                    , unsigned int attackDamage)
:_name(name),_hitPoint(hitPoint),_energyPoint(energyPoint),_attackDamage(attackDamage){
    std::cout<<"ClapTrap(name, hitPoint, energyPoint, attackDamage): ";
	std::cout<<_name<<", "<<_hitPoint<<", "<<_energyPoint<<", "<<_attackDamage<<"\n";
}

ClapTrap::ClapTrap(ClapTrap& rhs)
:_name(rhs._name),_hitPoint(rhs._hitPoint),_energyPoint(rhs._energyPoint),_attackDamage(rhs._attackDamage){
    std::cout<<"ClapTrap(rhs): "<< _name<<"\n";
}

ClapTrap::~ClapTrap(){
    std::cout<<"~ClapTrap(): "<<_name<<"\n";
}

void    ClapTrap::attack(const std::string& target){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"ClapTrap "<<_name<<" attacks "<<target;
    std::cout<<", causing "<<_attackDamage<<" points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoint<=amount){
        _hitPoint=0;
        std::cout<<"ClapTrap "<<_name<<" takes "<<amount<<" damage and It die.\n";
        return ;
    }
    _hitPoint-=amount;
    std::cout<<"ClapTrap "<<_name<<" takes "<<amount<<" damage ";
    std::cout<<"and now It has "<<_hitPoint<<" hit points.\n";
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    _hitPoint+=amount;
    std::cout<<"ClapTrap "<<_name<<" is repaired by "<<amount;
    std::cout<<", "<<"now It has "<<_hitPoint<<" hitpoint.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
    std::cout<<"ClapTrap::operator=(const ClapTrap&): "<< _name<<"\n";
    _name=rhs._name;
    _hitPoint=rhs._hitPoint;
    _energyPoint=rhs._energyPoint;
    _attackDamage=rhs._attackDamage;
    return (*this);
}

bool    ClapTrap::_checkCanDoSomething() const{
    if (!_hitPoint){
        std::cout<<"ClapTrap "<<_name<<" can't do anything, becuase It has zero hit point\n";
        return (false);
    }
    if (!_energyPoint){
        std::cout<<"ClapTrap "<<_name<<" can't do anything, becuase It has zero energy point\n";
        return (false);
    }
    return (true);
}
