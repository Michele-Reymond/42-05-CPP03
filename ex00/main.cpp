#include <iostream>
#include "ClapTrap.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {
    std::cout << COLOR "------CLAPTRAP CREATION-------" COLOR_RESET << std::endl;
    ClapTrap joe("Joe");
    ClapTrap joseph(joe);
    ClapTrap rachel("Rachel");
    ClapTrap rara = rachel;
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ The battle begin -------" COLOR_RESET << std::endl;
    rachel.attack("joe");
    joe.takeDamage(3);
    joe.takeDamage(5);
    joe.beRepaired(5);
    joe.takeDamage(7);
    joe.takeDamage(1);
    joe.beRepaired(10);
    joe.attack("Rachel");
    rachel.takeDamage(9);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.beRepaired(1);
    rachel.attack("joe");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------CLAPTRAP DESTRUCTION-------" COLOR_RESET << std::endl;
    return 0;
}