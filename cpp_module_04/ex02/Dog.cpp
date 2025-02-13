#include "Dog.hpp"
#include <iostream>

Dog::Dog()
:Animal("Dog"), _brain(new Brain){
	std::cout<<"Dog()\n";
}

Dog::Dog(const Dog& rhs)
:Animal(rhs._type), _brain(new Brain(*rhs._brain)){
	std::cout<<"Dog(const Dog& rhs)\n";
}

Dog::~Dog(){
	std::cout<<"~Dog()\n";
	delete _brain;
}

void	Dog::makeSound()const{
	std::cout<<"멍멍\n";
}

Brain*	Dog::getBrain()const{
	return (_brain);
}

Dog&	Dog::operator=(const Dog& rhs){
	std::cout<<"operator=(const Dog& rhs)\n";
    if (this==&rhs){
        return (*this);
	}
	_type=rhs._type;
	delete _brain;
	_brain=new Brain(*(rhs._brain));
	return (*this);
}