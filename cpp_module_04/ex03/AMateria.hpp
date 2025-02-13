#ifndef __AMATERIA_H__
#define __AMATERIA_H__

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string	_type;
	public:
				AMateria(const std::string& type);
		virtual	~AMateria();
		const std::string&	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};
#endif