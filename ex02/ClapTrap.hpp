#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap& instance);
        ~ClapTrap();

        ClapTrap    &operator=(const ClapTrap &instance);

        void        attack(const std::string &target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

    protected:
        std::string     _name;
        int             _hitPoints;
        int             _energyPoint;
        int             _attack_Damage;
};

#endif