#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(){
	std::cout<<"WrongAnimal()\n";
}

WrongAnimal::WrongAnimal(const std::string type)
:_type(type){
	std::cout<<"WrongAnimal(const std::string type): "<<type<<"\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& rhs)
:_type(rhs._type){
	std::cout<<"WrongAnimal(const WrongAnimal& rhs)\n";
}

WrongAnimal::~WrongAnimal(){
	std::cout<<"~WrongAnimal()\n";
}

void	WrongAnimal::makeSound()const{
	std::cout<<"WrongAnmial::makeSound(): make wronganimal sound!\n";
}

std::string	WrongAnimal::getType()const{
	return (_type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	std::cout<<"operator=(const WrongAnimal& rhs)\n";
	_type=rhs._type;
	return (*this);
}