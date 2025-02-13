#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
:WrongAnimal("WrongCat"){
	std::cout<<"WrongCat()\n";
}
WrongCat::WrongCat(const WrongCat& rhs)
:WrongAnimal(rhs._type){
	std::cout<<"WrongCat(const WrongCat& rhs)\n";
}

WrongCat::~WrongCat(){
	std::cout<<"~WrongCat()\n";
}

void	WrongCat::makeSound()const{
	std::cout<<"WrongCat sound!\n";
}

WrongCat& WrongCat::operator=(const WrongCat& rhs){
	std::cout<<"operator=(const WrongCat& rhs)\n";
	_type=rhs._type;
	return (*this);
}