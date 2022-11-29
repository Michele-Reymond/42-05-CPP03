#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "A new ScavTrap is created" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance) : ClapTrap(instance) {
    *this = instance;
    std::cout << "ScavTrap " << this->_name << " is copied" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is destructed" << std::endl;
}

// --------- Fonctions ------------

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is garding a gate" << std::endl;
}