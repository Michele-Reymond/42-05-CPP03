#include "ClapTrap.hpp"


// ---------Constructor and destructor ------------

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoint(10), _name("Default") {
    std::cout << "A new ClapTrap is created" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoint(10) {
    std::cout << "ClapTrap " << name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& instance) {
    *this = instance;
    std::cout << "ClapTrap " << this->_name << " is copied" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " is destructed" << std::endl;
}

// --------- Fonctions ------------

void ClapTrap::attack(const std::string &target) {
    if (this->_energyPoint > 0 && this->_hitPoints > 0) {
        this->_energyPoint--;
        std::cout << this->_name << " attack " << target << " who lose " << this->_attack_Damage << " points" << std::endl;
    } else if (this->_energyPoint <= 0) {
        std::cout << this->_name << " doesn't have enough energy to attack" << std::endl;
    } else if (this->_hitPoints <= 0) {
        std::cout << this->_name << " can't attack because he/she is dead" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints > 0) {
        this->_hitPoints -= amount;
        if (this->_hitPoints <= 0)
            std::cout << this->_name << " is attacked and loose all of his/her point(s)" << std::endl;
        else
            std::cout << this->_name << " loose " << amount << " point(s) and now have " << this->_hitPoints << " points" << std::endl;
    } else {
        std::cout << this->_name << " is already dead and can't be attacked" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoint > 0 && this->_hitPoints > 0) {
        this->_energyPoint--;
        this->_hitPoints += amount;
        std::cout << this->_name << " gain " << amount << " point(s) and now have " << this->_hitPoints << " point(s)" << std::endl;
    } else if (this->_energyPoint <= 0) {
        std::cout << this->_name << " doesn't have enough energy to heal" << std::endl;
    } else if (this->_hitPoints <= 0) {
        std::cout << this->_name << " can't heal because he/she is dead" << std::endl;
    }
}

// --------- Operator overload ------------

ClapTrap &ClapTrap::operator=(const ClapTrap &instance) {
    this->_name = instance._name;
    this->_energyPoint = instance._energyPoint;
    this->_hitPoints = instance._hitPoints;
    return *this;
}