#ifndef __CURE_H__
#define __CURE_H__

#include "AMateria.hpp"

class Cure
:public AMateria{
	private:
	public:
				Cure();
				Cure(const Cure& rhs);
		virtual	~Cure();
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
		Cure&	operator=(const Cure& rhs);
};

#endif