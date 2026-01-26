#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
    _name = "Default";
    _hit = 10;
    _energy = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parameterized Constructor called" << std::endl;
    _name = name;
    _hit = 10;
    _energy = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy Constructor called" << std::endl;
    _name = copy._name;
    _hit = copy._hit;
    _energy = copy._energy;
    _attack_damage = copy._attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        _name = copy._name;
        _hit = copy._hit;
        _energy = copy._energy;
        _attack_damage = copy._attack_damage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hit > 0 && _energy > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target
        << ", causing " << _attack_damage << " points of damage" << std::endl;
        _energy--;
    }
    else if (_hit <= 0)
        std::cout << "ClapTrap " << _name << " is destroyed and cannot attack" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " is too exhausted to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage " << std::endl;
    if (_hit > 0)
        _hit -= amount;
    if (_hit <= 0)
        std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hit > 0 && _energy > 0)
    {
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount 
        << " points" << std::endl;
        _hit += amount;
        _energy--;
    }
    else if (_hit <= 0)
        std::cout << "ClapTrap " << _name << " cannot be repaired because it is destroyed"
        << std::endl;
    else
        std::cout << "ClapTrap " << _name << " has no energy left to repair" << std::endl;
}

void ClapTrap::print()
{
    std::cout << "====ClapTarp Status====" << std::endl;
    std::cout << "Name " << _name << std::endl;
    std::cout << "Hit points " << _hit << std::endl;
    std::cout << "Energy points " << _energy << std::endl;
    std::cout << "Damage " << _attack_damage << std::endl;
}