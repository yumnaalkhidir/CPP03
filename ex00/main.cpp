#include "ClapTrap.hpp"

int main(void)
{
    {
        ClapTrap claptrap("Yumna");
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
        claptrap.takeDamage(4);
        claptrap.takeDamage(4);
        claptrap.takeDamage(4);
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
        claptrap.print();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ClapTrap claptrap("Yumna");
        for (int i = 0; i < 10; i++)
            claptrap.beRepaired(2);
        claptrap.takeDamage(4);
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
        claptrap.print();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ClapTrap claptrap("Yumna");
        claptrap.print();
        ClapTrap monster(claptrap);
        monster.print();
        claptrap = monster;
        claptrap.print();
    }
}