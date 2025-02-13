#ifndef __FIXED_H__
#define __FIXED_H__

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static const int _fractionalBits;

	public:
		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed(const Fixed &fixed);

		~Fixed();

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		bool	operator>(const Fixed &rhs);
		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs);
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs);
		bool	operator<=(const Fixed &rhs);
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs);
		Fixed&	operator=(const Fixed &rhs);
		Fixed&	operator+(const Fixed &rhs);
		Fixed&	operator-(const Fixed &rhs);
		Fixed&	operator*(const Fixed &rhs);
		Fixed&	operator/(const Fixed &rhs);
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed&	min(Fixed& lhs, Fixed& rhs);
		static const Fixed&	min(const Fixed& lhs, const Fixed& rhs);
		static Fixed&	max(Fixed& lhs, Fixed& rhs);
		static const Fixed&	max(const Fixed& lhs, const Fixed& rhs);
};
std::ostream&	operator<<(std::ostream &os, const Fixed &rhs);
#endif