#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat
:public Animal{
	public:
		Cat();
		Cat(const Cat& rhs);

		virtual ~Cat();

		virtual void	makeSound()const;

		Cat& operator=(const Cat& rhs);
	private:
};
#endif