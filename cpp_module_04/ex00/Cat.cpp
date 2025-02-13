#include "Cat.hpp"
#include <iostream>

Cat::Cat()
:Animal("Cat"){
	std::cout<<"Cat()\n";
}

Cat::Cat(const Cat& rhs)
:Animal(rhs._type){
	std::cout<<"Cat(const Cat& rhs)\n";
}

Cat::~Cat(){
	std::cout<<"~Cat()\n";
}

void	Cat::makeSound()const{
	std::cout<<"야옹\n";
}

Cat& Cat::operator=(const Cat& rhs){
	std::cout<<"operator=(const Cat& rhs)\n";
	_type=rhs._type;
	return (*this);
}