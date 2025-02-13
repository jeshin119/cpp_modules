#ifndef __FIXED_H__
#define __FIXED_H__

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

		Fixed&	operator=(const Fixed &fixed);
};
std::ostream&	operator<<(std::ostream &os, const Fixed &fixed);
#endif