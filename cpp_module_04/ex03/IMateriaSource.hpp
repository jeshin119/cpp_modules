#ifndef __IMATERIASOURCE_H__
#define __IMATERIASOURCE_H__

#include <string>
#include "AMateria.hpp"

class AMateria;

class IMateriaSource{
	public:
		virtual	~IMateriaSource();
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(const std::string& type) = 0;
};
#endif