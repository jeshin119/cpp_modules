#include "AMateria.hpp"
#include <iostream>
AMateria::AMateria(const std::string& type)
:_type(type){}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const{
	return (_type);
}

void		AMateria::use(ICharacter& target){
	std::cout<<"* AMateria::use to"<<target.getName()<<" *\n";
}