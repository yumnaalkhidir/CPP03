#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
    _name = "Default";
    _hit = 100;
    _energy = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Parameterized Constructor called" << std::endl;
    _name = name;
    _hit = 100;
    _energy = 50;
    _attack_damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl; 
    _name = copy._name;
    _hit = copy._hit;
    _energy = copy._energy;
    _attack_damage = copy._attack_damage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        _name = copy._name;
        _hit = copy._hit;
        _energy = copy._energy;
        _attack_damage = copy._attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Hi my name " << _name << " and my ClapTrap name is " <<  ClapTrap::_name << std::endl;
}
