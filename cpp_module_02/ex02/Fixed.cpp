#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs){
	return (lhs < rhs) ? lhs : rhs;
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs){
	return (lhs < rhs) ? lhs : rhs;
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs){
	return (lhs > rhs) ? lhs : rhs;
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs){
	return (lhs > rhs) ? lhs : rhs;
}

Fixed::Fixed():_value(0){
	// std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &fixed){
	// std::cout<<"Copy constructor called\n";
	_value = fixed._value;
}

Fixed::Fixed(const int nParam){
	// std::cout<<"Int constructor called\n";
	_value = nParam<<_fractionalBits;
}

Fixed::Fixed(const float fParam){
	// std::cout<<"Float constructor called\n";
	_value = roundf(fParam * (1<<_fractionalBits));
}

Fixed::~Fixed(){
	// std::cout<<"Destructor called\n";
}

int Fixed::getRawBits() const{
	return (_value);
}

void Fixed::setRawBits(int const raw){
	_value=raw;
}

float	Fixed::toFloat(void) const{
	return ((static_cast<float>(_value)) / (1<<_fractionalBits));
}

int		Fixed::toInt(void) const{
	return (_value>>_fractionalBits);
}

Fixed& Fixed::operator=(const Fixed &rhs){
	// std::cout<<"Copy assignment operator called\n";
	_value = rhs.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed &rhs){
	return (_value > rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const{
	return (_value > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs){
	return (_value < rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const{
	return (_value < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs){
	return (_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs){
	return (_value <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs)
{
	return (_value == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs){
	return (_value != rhs.getRawBits());
}

Fixed&	Fixed::operator+(const Fixed &rhs){
	_value += rhs.getRawBits();
	return *this;
}

Fixed&	Fixed::operator-(const Fixed &rhs){
	_value -= rhs.getRawBits();
	return *this;
}

Fixed&	Fixed::operator*(const Fixed &rhs){
	int64_t product = _value * rhs.getRawBits();
	_value = product >>_fractionalBits;
	return *this;
}

Fixed&	Fixed::operator/(const Fixed &rhs){
	int divisor = rhs.getRawBits();
	if (divisor == 0)
		throw std::runtime_error("Division by zero");
	int64_t	dividend = static_cast<int64_t>(_value)<<_fractionalBits;
	dividend /= divisor;
	_value = static_cast<int32_t>(dividend);
	return *this;
}

Fixed&	Fixed::operator++(){
	_value++;
	return *this;
}

Fixed		Fixed::operator++(int){
	Fixed tmp(this->toFloat());
	_value++;
	return tmp;
}

Fixed&	Fixed::operator--(){
	_value--;
	return *this;
}

Fixed		Fixed::operator--(int){
	Fixed tmp(this->toFloat());
	_value--;
	return tmp;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &rhs){
	os<<rhs.toFloat();
	return (os);
}