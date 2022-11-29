#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& instance);
       ~ScavTrap();

        ScavTrap    &operator=(const ScavTrap &instance);

        void guardGate();
};

#endif