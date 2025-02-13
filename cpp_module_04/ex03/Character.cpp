#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character()
:_name("noName"){
	_setEmptyInventory();
}

Character::Character(const Character& rhs)
:_name(rhs._name){
	_setEmptyInventory();
	_copyInventory(rhs);
}

Character::Character(const std::string name)
:_name(name){
	_setEmptyInventory();
}

Character::~Character(){
	_deleteInventory();
}

std::string const & Character::getName() const{
	return (_name);
}

void Character::equip(AMateria* m){
	for(int i=0; i<4; i++){
		if (_inventory[i] == NULL){
			_inventory[i] = m;
			return ;
		}
	}
	std::cout<<_name<<"'s inventory is full. Can't equip "<<m->getType()<<"\n";
}

void Character::unequip(int idx){
	if (_inventory[idx]==NULL){
		std::cout<<_name<<"'s inventory["<<idx<<"] isn't. Can't unequip\n";
		return ;
	}
	for(int j=0;j<4;j++){
		if (_savingInventory[j]==NULL){
			_savingInventory[j] = _inventory[idx];
			_inventory[idx]=NULL;
			return ;
		}
	}
}

void Character::use(int idx, ICharacter& target){
	if (_inventory[idx]==NULL){
		std::cout<<_name<<"'s inventory["<<idx<<"] isn't. Can't use\n";
		return ;
	}
	_inventory[idx]->use(target);
}

void	Character::_setEmptyInventory(){
	for(int i=0;i<4;i++){
		_inventory[i]=NULL;
	}
	for(int i=0;i<4;i++){
		_savingInventory[i]=NULL;
	}
}

void		Character::_copyInventory(const Character& rhs){
	if (&rhs==this){
		return ;
	}
	for(int i=0;i<4;i++){
		if(rhs._inventory[i]){
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	for(int i=0;i<4;i++){
		if(rhs._savingInventory[i]){
			_savingInventory[i] = rhs._savingInventory[i]->clone();
		}
	}
}

void		Character::_deleteInventory(){
	for(int i=0; i<4; i++){
		if(_inventory[i]){
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for(int i=0;i<4;i++){
		if(_savingInventory[i]){
			delete _savingInventory[i];
			_savingInventory[i] = NULL;
		}
	}
}

Character& Character::operator=(const Character& rhs){
	if (&rhs==this){
		return (*this);
	}
	_name=rhs._name;
	_deleteInventory();
	_copyInventory(rhs);
	return (*this);
}
