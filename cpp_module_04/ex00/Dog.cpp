#include "Dog.hpp"
#include <iostream>

Dog::Dog()
:Animal("Dog"){
	std::cout<<"Dog()\n";
}

Dog::Dog(const Dog& rhs)
:Animal(rhs._type){
	std::cout<<"Dog(const Dog& rhs)\n";
}

Dog::~Dog(){
	std::cout<<"~Dog()\n";
}

void	Dog::makeSound()const{
	std::cout<<"멍멍\n";
}

Dog&	Dog::operator=(const Dog& rhs){
	std::cout<<"operator=(const Dog& rhs)\n";
	_type=rhs._type;
	return (*this);
}