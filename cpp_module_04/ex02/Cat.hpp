#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat
:public Animal{
	public:
				Cat();
				Cat(const Cat& rhs);
		virtual ~Cat();
		virtual void	makeSound()const;
		Brain*			getBrain()const;
		Cat&	operator=(const Cat& rhs);
	private:
		Brain*	_brain;
};
#endif