#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    public:
        ClapTrap();
        ClapTrap(const ClapTrap& instance);
        ClapTrap &operator=(const ClapTrap& instance);
        ~ClapTrap();

    private:

};

#endif