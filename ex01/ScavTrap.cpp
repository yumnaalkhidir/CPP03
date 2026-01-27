#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    _name = "Default";
    _hit = 100;
    _energy = 50;
    _attack_damage = 20;
    _is_guarded = false;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
    _hit = 100;
    _energy = 50;
    _attack_damage = 20;
    _is_guarded = false;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl; 
    _is_guarded = copy._is_guarded;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        _name = copy._name;
        _hit = copy._hit;
        _energy = copy._energy;
        _attack_damage = copy._attack_damage;
        _is_guarded = copy._is_guarded;   
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_hit > 0 && _energy > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target
        << ", causing " << _attack_damage << " points of damage" << std::endl;
        _energy--;
    }
    else if (_hit <= 0)
        std::cout << "ScavTrap " << _name << " is destroyed and cannot attack" << std::endl;
    else
        std::cout << "ScavTrap " << _name << " is too exhausted to attack" << std::endl;
}

void ScavTrap::guardGate()
{
    _is_guarded = true;
    std::cout << _name << " is in Gate Keeper mode "  << std::endl;
}
