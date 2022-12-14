#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {
    std::cout << COLOR "------CLAPTRAP CREATION-------" COLOR_RESET << std::endl;
    ClapTrap ross("Ross");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------SCAVTRAP CREATION-------" COLOR_RESET << std::endl;
    ScavTrap phoebe("Phoebe");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ The battle begin -------" COLOR_RESET << std::endl;
    phoebe.attack("Ross");
    ross.takeDamage(20);
    phoebe.takeDamage(30);
    phoebe.beRepaired(30);
    phoebe.takeDamage(40);
    phoebe.guardGate();
    phoebe.takeDamage(60);
    phoebe.attack("Ross");
    phoebe.guardGate();
    
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------CLAPTRAP DESTRUCTION-------" COLOR_RESET << std::endl;
    return 0;
}