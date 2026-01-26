#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called"<< std::endl;
    _hit = 100;
    _energy = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Parameterized Constructor called"<< std::endl;
    _hit = 100;
    _energy = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor called"<< std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
    std::cout << "FragTrap Copy Assignment Operator called"<< std::endl;
    if (this != &copy)
    {
        _name = copy._name;
        _hit = copy._hit;
        _energy = copy._energy;
        _attack_damage = copy._attack_damage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called"<< std::endl;
}

void FragTrap::highFiveGuys(void )
{
    std::cout << "FragTrap " << _name << " requests a high five " << std::endl;
}

void FragTrap::print()
{
    std::cout << "====FragTarp Status====" << std::endl;
    std::cout << "Name " << _name << std::endl;
    std::cout << "Hit points " << _hit << std::endl;
    std::cout << "Energy points " << _energy << std::endl;
    std::cout << "Damage " << _attack_damage << std::endl;
}