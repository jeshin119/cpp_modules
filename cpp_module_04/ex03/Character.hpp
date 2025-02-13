#ifndef __CHARACTER_H__
#define __CHARACTER_H__

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character
:public ICharacter{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
		AMateria*	_savingInventory[4];
		void	_setEmptyInventory();
		void	_copyInventory(const Character& rhs);
		void	_deleteInventory();
	public:
				Character();
				Character(const std::string name);
				Character(const Character& rhs);
		virtual	~Character();
		virtual const std::string&	getName() const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);
		Character&	operator=(const Character& rhs);
};

#endif