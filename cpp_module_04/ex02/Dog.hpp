#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog
:public Animal{
	public:
				Dog();
				Dog(const Dog& rhs);
		virtual	~Dog();
		virtual void	makeSound()const;
		Brain*			getBrain()const;
		Dog&	operator=(const Dog& rhs);
	private:
		Brain*	_brain;
};
#endif