#include "ScavTrap.hpp"

int main(void)
{
    {
        ScavTrap scav("Yumna");
        scav.attack("Monster");
        scav.guardGate();
        scav.takeDamage(100);
        scav.beRepaired(10);
        scav.attack("Monster");
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ScavTrap scav("Yumna");
        for (int i = 0; i <= 50; i++)
            scav.attack("Monster");
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ScavTrap scav("Alpha");
        ScavTrap bob(scav);
        bob.attack("Monster");
        ScavTrap james;
        james = bob;
        james.guardGate();
    }
}