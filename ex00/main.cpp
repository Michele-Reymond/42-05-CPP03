#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap joe("Joe");
    ClapTrap joseph(joe);
    ClapTrap rachel("Rachel");
    ClapTrap rara = rachel;

    rachel.attack("joe");
    joe.takeDamage(3);
    joe.takeDamage(5);
    joe.takeDamage(3);
    joe.takeDamage(1);
    joe.beRepaired(10);
    joe.attack("Rachel");
    rachel.takeDamage(5);
    rara.takeDamage(0);
    rachel.takeDamage(5);
    return 0;
}