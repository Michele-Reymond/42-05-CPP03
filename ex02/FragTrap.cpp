#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->_hitPoints = 100;
    this->_energyPoint = 100;
    this->_attack_Damage = 30;
    std::cout << "A new Default FragTrap is created" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoint = 100;
    this->_attack_Damage = 30;
    std::cout << "FragTrap " << name << " is created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& instance) {
    *this = instance;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " is destructed" << std::endl;
}

// --------- Fonctions ------------

void FragTrap::highFivesGuys() {
    if (this->_energyPoint > 0 && this->_hitPoints > 0) {
         std::cout << "FragTrap " << this->_name << " rise his/her hand and wait for a clap" << std::endl;
    } else if (this->_energyPoint <= 0) {
        std::cout << this->_name << " doesn't have enough energy to make high fives" << std::endl;
    } else if (this->_hitPoints <= 0) {
        std::cout << this->_name << " can't make high fives because he/she is dead" << std::endl;
    }
}

// --------- Operator overload ------------

FragTrap &FragTrap::operator=(const FragTrap &instance) {
    this->_name = instance._name;
    this->_energyPoint = instance._energyPoint;
    this->_hitPoints = instance._hitPoints;
    this->_attack_Damage = instance._attack_Damage;
    std::cout << this->_name << " is a new FragTrap freshly copied with =" << std::endl;
    return *this;
}