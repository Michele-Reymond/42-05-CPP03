#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->_hitPoints = 100;
    this->_energyPoint = 50;
    this->_attack_Damage = 20;
    std::cout << "A new Default ScavTrap is created" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoint = 50;
    this->_attack_Damage = 20;
    std::cout << "ScavTrap " << name << " is created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& instance) {
    *this = instance;
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
    std::cout << this->_name << " is a new ScavTrap freshly copied with =" << std::endl;
    return *this;
}