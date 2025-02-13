#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog
:public Animal{
	public:
		Dog();
		Dog(const Dog& rhs);

		virtual	~Dog();

		virtual void	makeSound()const;

		Dog&	operator=(const Dog& rhs);
	private:
};
#endif