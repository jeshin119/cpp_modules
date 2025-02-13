#ifndef __MATERIASOURCE_H__
#define __MATERIASOURCE_H__

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource
:public IMateriaSource{
	private:
		AMateria*	_sources[4];
		void		_setSources();
		void		_copySources(const MateriaSource& rhs);
		void		_deleteSources();
	public:
				MateriaSource();
				MateriaSource(const MateriaSource& rhs);
		virtual	~MateriaSource();
		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(const std::string& type);
		MateriaSource&	operator=(const MateriaSource& rhs);
};
#endif