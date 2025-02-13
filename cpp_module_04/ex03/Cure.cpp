#include "Cure.hpp"
#include <iostream>

Cure::Cure()
:AMateria("cure"){}

Cure::Cure(const Cure& rhs)
:AMateria(rhs._type){}

Cure::~Cure(){}

AMateria*	Cure::clone() const{
	return (new Cure());
}

void		Cure::use(ICharacter& target){
	std::cout<<"* heals "<<target.getName()<<"’s wounds *"<<"\n";
}

Cure&		Cure::operator=(const Cure& rhs){
	if (&rhs==this){
		return (*this);
	}
	_type=rhs._type;
	return (*this);
}