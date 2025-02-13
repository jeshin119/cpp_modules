#include "Animal.hpp"
#include <iostream>

Animal::Animal(){
	std::cout<<"Animal()\n";
}

Animal::Animal(const std::string type)
:_type(type){
	std::cout<<"Animal(type): "<<type<<"\n";
}

Animal::Animal(const Animal& rhs)
:_type(rhs._type){
	std::cout<<"Animal(const Animal& rhs)\n";
}

Animal::~Animal(){
	std::cout<<"~Animal()\n";
}

std::string	Animal::getType()const{
	return (_type);
}

Animal& Animal::operator=(const Animal& rhs){
	std::cout<<"Animal::operator=(const Animal& rhs)\n";
	_type=rhs._type;
	return (*this);
}