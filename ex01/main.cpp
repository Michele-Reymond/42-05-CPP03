#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap joe("Joe");
    ClapTrap joseph(joe);
    ClapTrap jo = joe;
    ClapTrap rachel("Rachel");
    ScavTrap robot("Roboto");

    rachel.attack("jo");
    jo.takeDamage(20);
    jo.takeDamage(32);
    jo.takeDamage(40);
    jo.takeDamage(20);
    jo.beRepaired(10);
    jo.attack("Rachel");
    robot.guardGate();
}