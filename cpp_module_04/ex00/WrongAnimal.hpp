#ifndef __WRONGANIMALL_H__
#define __WRONGANIMALL_H__

#include <string>

class WrongAnimal{
	public:
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& rhs);

		virtual	~WrongAnimal();

		void	makeSound()const;
		std::string		getType()const;

		WrongAnimal& operator=(const WrongAnimal& rhs);
	protected:
		std::string	_type;
};
#endif