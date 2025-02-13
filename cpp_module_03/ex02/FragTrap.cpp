#include "FragTrap.hpp"
#include <iostream>

const unsigned int FragTrap::_kHitPoint = 100;
const unsigned int FragTrap::_kEnergyPoint = 100;
const unsigned int FragTrap::_kAttackDamage = 30;

FragTrap::FragTrap()
:ClapTrap("noName", _kHitPoint, _kEnergyPoint, _kAttackDamage){
    std::cout<<"FragTrap(): "<<_name<<"\n";
}

FragTrap:: FragTrap(const std::string name)
:ClapTrap(name, _kHitPoint, _kEnergyPoint, _kAttackDamage){
    std::cout<<"FragTrap(name): "<<_name<<"\n";
}

FragTrap:: FragTrap(const FragTrap& rhs)
:ClapTrap(rhs._name, rhs._hitPoint, rhs._energyPoint, rhs._attackDamage){
    std::cout<<"FragTrap(rhs): "<<_name<<"\n";
}

FragTrap:: ~FragTrap(){
    std::cout<<"~FragTrap(): "<<_name<<"\n";
}

void    FragTrap::attack(const std::string& target){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"FragTrap "<<_name<<" attacks "<<target;
    std::cout<<", causing "<<_attackDamage<<" points of damage!\n";

}

void    FragTrap::takeDamage(unsigned int amount){
    if (_hitPoint<=amount){
        _hitPoint=0;
        std::cout<<"FragTrap "<<_name<<" takes "<<amount<<" damage and It dies.\n";
        return ;
    }
    _hitPoint-=amount;
    std::cout<<"FragTrap "<<_name<<" takes "<<amount<<" damage ";
    std::cout<<"and now It has "<<_hitPoint<<" hit points.\n";
}

void    FragTrap::beRepaired(unsigned int amount){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    _hitPoint+=amount;
    std::cout<<"FragTrap "<<_name<<" is repaired by "<<amount;
    std::cout<<", "<<"now It has "<<_hitPoint<<" hitpoint.\n";
}

void    FragTrap::highFivesGuys(){
    if (!_checkCanDoSomething())
        return ;
    _energyPoint--;
    std::cout<<"FragTrap "<<_name<<" does highFive!\n";
}

FragTrap&   FragTrap::operator=(const FragTrap& rhs){
    std::cout<<"FragTrap::operator=(const FragTrap&): "<< _name<<"\n";
    _name = rhs._name;
    _hitPoint = rhs._hitPoint;
    _energyPoint = rhs._energyPoint;
    _attackDamage = rhs._attackDamage;
    return (*this);
}

bool    FragTrap::_checkCanDoSomething() const{
    if (!_hitPoint){
        std::cout<<"FragTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero hit point\n";
        return (false);
    }
    if (!_energyPoint){
        std::cout<<"FragTrap "<<_name<<" can't do anything ";
        std::cout<<"becuase It has zero energy point\n";
        return (false);
    }
    return (true);
}