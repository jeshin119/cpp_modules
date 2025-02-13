#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& rhs);

        virtual ~FragTrap();

        virtual void    attack(const std::string& target);
        virtual void    takeDamage(unsigned int amount);
        virtual void    beRepaired(unsigned int amount);
        void            highFivesGuys();

        FragTrap&   operator=(const FragTrap& rhs);
    private:
        virtual bool    _checkCanDoSomething() const;
        static const unsigned int _kHitPoint;
        static const unsigned int _kEnergyPoint;
        static const unsigned int _kAttackDamage;
};
#endif