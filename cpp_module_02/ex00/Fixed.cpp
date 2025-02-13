#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed():_value(0){
	std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed){
	std::cout<<"Copy constructor called\n";
	_value = fixed.getRawBits();
}

Fixed::~Fixed(){
	std::cout<<"Destructor called\n";
}

int Fixed::getRawBits() const{
	std::cout<<"getRawBits member function called\n";
	return _value;
}

void Fixed::setRawBits(int const raw){
	_value=raw;
}

Fixed& Fixed::operator =(const Fixed &fixed){
	std::cout<<"Copy assignment operator called\n";
	_value = fixed.getRawBits();
	return *this;
}