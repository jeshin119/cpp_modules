#pragma once
#ifndef __HUMANA_H__
#define __HUMANA_H__

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA{
	private:
		Weapon	&_weapon;
		std::string	_name;
	public:
		HumanA(const std::string &paramName, Weapon &paramWeapon);
		~HumanA();
		void	attack();
};
#endif