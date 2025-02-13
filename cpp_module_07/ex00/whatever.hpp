#ifndef __WHATEVER_H__
#define __WHATEVER_H__

#include <iostream>

template<typename T>
void	swap(T& lhs, T& rhs){
	T tmp = rhs;
	rhs = lhs;
	lhs = tmp;
}

template<typename T>
T	min(T lhs, T rhs){
	if (lhs < rhs)
		return lhs;
	return (rhs);
}

template<typename T>
T	max(T lhs, T rhs){
	if (lhs > rhs)
		return lhs;
	return (rhs);
}
#endif