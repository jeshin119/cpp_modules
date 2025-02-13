#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& rhs);

        virtual ~ScavTrap();

        virtual void    attack(const std::string& target);
        virtual void    takeDamage(unsigned int amount);
        virtual void    beRepaired(unsigned int amount);
        void    guardGate();

        ScavTrap&   operator=(const ScavTrap& rhs);
    private:
        static const unsigned int _kHitPoint;
        static const unsigned int _kEnergyPoint;
        static const unsigned int _kAttackDamage;

        virtual bool    _checkCanDoSomething() const;
};
#endif