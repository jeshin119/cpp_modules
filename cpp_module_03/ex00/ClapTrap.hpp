#ifndef __CLAPTRAP_H__
#define __CLAPTRAP_H__

#include <string>
class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string paramName);
        ClapTrap(ClapTrap& rhs);

        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        ClapTrap& operator=(const ClapTrap& rhs);
    private:
        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        unsigned int    _attackDamage;

        bool    _checkCanDoSomething() const;
};

#endif