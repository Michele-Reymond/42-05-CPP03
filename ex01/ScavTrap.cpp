#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "A new ScavTrap is created" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance) {
    *this = instance;
    std::cout << "ScavTrap " << this->_name << " is copied" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is destructed" << std::endl;
}

// --------- Fonctions ------------

void ScavTrap::guardGate() {
    if (this->_energyPoint > 0 && this->_hitPoints > 0) {
         std::cout << "ScavTrap " << this->_name << " is garding a gate" << std::endl;
    } else if (this->_energyPoint <= 0) {
        std::cout << this->_name << " doesn't have enough energy to guard a gate" << std::endl;
    } else if (this->_hitPoints <= 0) {
        std::cout << this->_name << " can't guard a gate because he/she is dead" << std::endl;
    }
}

// --------- Operator overload ------------

ScavTrap &ScavTrap::operator=(const ScavTrap &instance) {
    this->_name = instance._name;
    this->_energyPoint = instance._energyPoint;
    this->_hitPoints = instance._hitPoints;
    return *this;
}