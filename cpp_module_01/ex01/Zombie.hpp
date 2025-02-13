#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>
#include <iostream>

class Zombie{
public:
	Zombie();
	Zombie(std::string paramName);
	~Zombie();
	void	announce(void);
	void	setName(std::string paramName);
private:
	std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
Zombie*	zombieHorde(int N, std::string name);
#endif