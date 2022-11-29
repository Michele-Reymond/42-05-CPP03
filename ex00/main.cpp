#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap joe("Joe");
    ClapTrap joseph(joe);
    ClapTrap jo = joe;
    ClapTrap rachel("Rachel");

    rachel.attack("jo");
    jo.takeDamage(3);
    jo.takeDamage(5);
    jo.takeDamage(3);
    jo.takeDamage(1);
    jo.beRepaired(10);
    jo.attack("Rachel");
}