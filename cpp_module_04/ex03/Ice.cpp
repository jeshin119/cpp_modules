#include "Ice.hpp"
#include <iostream>

Ice::Ice()
:AMateria("ice"){}

Ice::Ice(const Ice& rhs)
:AMateria(rhs._type){}

Ice::~Ice(){}

AMateria* Ice::clone() const{
	return (new Ice());
}
void		Ice::use(ICharacter& target){
	std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *\n";
}

Ice&	Ice::operator=(const Ice& rhs){
	if (&rhs==this){
		return (*this);
	}
	_type=rhs._type;
	return (*this);
}