#include "ScavTrap.hpp"

int main(void)
{
    {
        ScavTrap scav("Yumna");
        scav.print();
        scav.attack("Monster");
        scav.guardGate();
        scav.takeDamage(100);
        scav.beRepaired(10);
        scav.attack("Monster");
        scav.print();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ScavTrap scav("Yumna");
        for (int i = 0; i <= 50; i++)
            scav.attack("Monster");
        scav.print();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        ScavTrap scav("Yumna");
        ScavTrap bob(scav);
        bob.attack("MOnster");
        ScavTrap james;
        james = bob;
        scav.print();
        bob.print();
        james.print();
    }
}