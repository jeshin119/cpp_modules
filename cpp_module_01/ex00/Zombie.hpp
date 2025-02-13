#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie(std::string paramName);
	~Zombie();
	void	announce(void);
private:
	Zombie();
	std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif