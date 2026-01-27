#include "ClapTrap.hpp"

int main(void)
{
    {
        ClapTrap claptrap("Yumna");
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
        claptrap.takeDamage(12);
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ClapTrap claptrap("Yumna");
        for (int i = 0; i < 10; i++)
            claptrap.beRepaired(2);
        claptrap.attack("Monster");
        claptrap.beRepaired(2);
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ClapTrap claptrap("Yumna");
        claptrap.takeDamage(5);
        ClapTrap monster(claptrap);
        monster.takeDamage(5);
        
        ClapTrap clap;
        clap = monster;
        clap.attack("Monster");
    }
}