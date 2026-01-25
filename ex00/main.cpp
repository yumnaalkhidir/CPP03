#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap1("Yumna");
    claptrap1.attack("Maha");
    claptrap1.beRepaired(2);
    claptrap1.takeDamage(4);
    claptrap1.takeDamage(4);
    claptrap1.takeDamage(4);
    // claptrap1.takeDamage(4);
    claptrap1.print();
}