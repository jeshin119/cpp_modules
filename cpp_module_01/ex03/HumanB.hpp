#pragma once
#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB{
	private:
		Weapon	*_weapon;
		std::string	_name;
	public:
		HumanB(const std::string &name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};
#endif