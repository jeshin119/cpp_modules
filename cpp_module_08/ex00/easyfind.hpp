#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& container, int val){
	typename T::iterator iter;

	iter = std::find(container.begin(), container.end(), val);
	return ((iter != container.end()) ? iter : container.end());
}

#endif