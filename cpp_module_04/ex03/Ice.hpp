#ifndef __ICE_H__
#define __ICE_H__

#include "AMateria.hpp"

class Ice
:public AMateria{
	private:
	public:
				Ice();
				Ice(const Ice& rhs);
		virtual	~Ice();
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
		Ice&	operator=(const Ice& rhs);
};

#endif