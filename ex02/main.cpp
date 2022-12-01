#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define COLOR_RESET     "\x1b[0m"
#define COLOR           "\x1b[2m"

int main() {
    std::cout << COLOR "------CLAPTRAP CREATION-------" COLOR_RESET << std::endl;
    ClapTrap ross("Ross");
    ClapTrap chandler("Chandler");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------SCAVTRAP CREATION-------" COLOR_RESET << std::endl;
    ScavTrap phoebe("Phoebe");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------FRAGTRAP CREATION-------" COLOR_RESET << std::endl;
    FragTrap monika("Monika");
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------ The battle begin -------" COLOR_RESET << std::endl;
    phoebe.attack("Ross");
    ross.takeDamage(20);
    monika.attack("Chandler");
    chandler.takeDamage(30);
    monika.takeDamage(30);
    monika.beRepaired(30);
    monika.takeDamage(40);
    monika.highFivesGuys();
    monika.takeDamage(60);
    monika.attack("Ross");
    monika.highFivesGuys();
    
    std::cout << std::endl << std::endl;
    std::cout << COLOR "------CLAPTRAP DESTRUCTION-------" COLOR_RESET << std::endl;
    return 0;
}