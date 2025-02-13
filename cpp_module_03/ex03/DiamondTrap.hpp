#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& rhs);

		virtual ~DiamondTrap();

        virtual void    attack(const std::string& target);
        virtual void    takeDamage(unsigned int amount);
        virtual void    beRepaired(unsigned int amount);
		void			whoAmI();

		DiamondTrap&	operator=(const DiamondTrap& rhs);
	private:
        std::string     _name;
        static const unsigned int _kHitPoint;
        static const unsigned int _kEnergyPoint;
        static const unsigned int _kAttackDamage;

        virtual bool    _checkCanDoSomething() const;
};
#endif