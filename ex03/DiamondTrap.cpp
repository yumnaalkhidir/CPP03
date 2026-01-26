#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    std::cout << "DiamondTrap Parameterized Constructor called" << std::endl;
    this->_name = name;
    std::cout << _name << std::endl;
    ClapTrap::_name  = this->_name + "_clap_name";
    std::cout << ClapTrap::_name << std::endl;
    this->_hit = FragTrap::_hit;
    this->_energy = ScavTrap::_energy;
    this->_attack_damage = FragTrap::_attack_damage;
    std::cout << "Name " << _name << std::endl;
    std::cout << "Hit points " << _hit << std::endl;
    std::cout << "Energy points " << _energy << std::endl;
    std::cout << "Damage " << _attack_damage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

// DiamondTrap& DiamondTrap::operator=(const DiamondTrap& copy)
// {
//     std::cout << "DiamondTrap Copy Assignment Operator called" << std::endl;
//     if (this != &copy)
//     {

//     }
// }

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{

}

void DiamondTrap::print()
{
    std::cout << "====DiamondTarp Status====" << std::endl;
    std::cout << "Name " << _name << std::endl;
    std::cout << "Hit points " << _hit << std::endl;
    std::cout << "Energy points " << _energy << std::endl;
    std::cout << "Damage " << _attack_damage << std::endl;
}
