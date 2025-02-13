#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal{
	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal& rhs);
		virtual	~Animal();
		virtual void	makeSound()const;
		std::string		getType()const;
		Animal&	operator=(const Animal& rhs);
	protected:
		std::string _type;
};
#endif