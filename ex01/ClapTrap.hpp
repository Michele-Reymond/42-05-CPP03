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
        std::string getName() const;
        int         getHitPoints() const;
        int         getEnergyPoint() const;
        int         getAttack_Damage() const;

    protected:
        std::string         _name;
        int                 _hitPoints;
        int                 _energyPoint;
        static const int    _attack_Damage = 20;
};

std::ostream &operator<<(std::ostream &out, ClapTrap const &instance);

#endif