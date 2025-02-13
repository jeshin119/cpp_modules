#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat
:public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const std::string type);
		WrongCat(const WrongCat& rhs);

		virtual	~WrongCat();

		void	makeSound()const;

		WrongCat& operator=(const WrongCat& rhs);
	private:
};
#endif