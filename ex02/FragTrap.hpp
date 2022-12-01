#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap();
        FragTrap(const std::string name);
        FragTrap(const FragTrap& instance);
       ~FragTrap();

        FragTrap    &operator=(const FragTrap& instance);

       void highFivesGuys(void);
};

#endif