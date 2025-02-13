#include "ScavTrap.hpp"
#include <iostream>

const unsigned int ScavTrap::_kHitPoint = 100;
const unsigned int ScavTrap::_kEnergyPoint = 50;
const unsigned int ScavTrap::_kAttackDamage = 20;

ScavTrap::ScavTrap()
:ClapTrap("noName", _kHitPoint, _kEnergyPoint, _kAttackDamage){
    std::cout<<"ScavTrap(): "<<_name<<"\n";
}

ScavTrap:: ScavTrap(const std::string name)
:ClapTrap(name, _kHitPoint, _kEnergyPoint, _kAttackDamage){
    std::cout<<"ScavTrap(name): "<<_name<<"\n";
}

ScavTrap:: ScavTrap(const ScavTrap& rhs)
:ClapTrap(rhs._name, rhs._hitPoint, rhs._energyPoint, rhs._attackDamage){
    std::cout<<"ScavTrap(rhs): "<<_name<<"\n";
}

ScavTrap:: ~ScavTrap(){
    std::cout<<"~ScavTrap(): "<<_name<<"\n";
}

void    ScavTrap::attack(const std::string& target){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target;
    std::cout<<", causing "<<_attackDamage<<" points of damage!\n";
}

void    ScavTrap::takeDamage(unsigned int amount){
    if (_hitPoint<=amount){
        _hitPoint=0;
        std::cout<<"ScavTrap "<<_name<<" takes "<<amount<<" damage and It dies.\n";
        return ;
    }
    _hitPoint-=amount;
    std::cout<<"ScavTrap "<<_name<<" takes "<<amount<<" damage ";
    std::cout<<"and now It has "<<_hitPoint<<" hit points.\n";
}

void    ScavTrap::beRepaired(unsigned int amount){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    _hitPoint+=amount;
    std::cout<<"ScavTrap "<<_name<<" is repaired by "<<amount;
    std::cout<<", "<<"now It has "<<_hitPoint<<" hitpoint.\n";
}

void    ScavTrap::guardGate(){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"ScavTrap "<<_name<<" is now in gate keeper mode\n";
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& rhs){
    std::cout<<"ScavTrap::operator=(const ScavTrap&): "<< _name<<"\n";
    _name = rhs._name;
    _hitPoint = rhs._hitPoint;
    _energyPoint = rhs._energyPoint;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

bool    ScavTrap::_checkCanDoSomething() const{
    if (!_hitPoint){
        std::cout<<"ScavTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero hit point\n";
        return (false);
    }
    if (!_energyPoint){
        std::cout<<"ScavTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero energy point\n";
        return (false);
    }
    return (true);
}