#include "FragTrap.hpp"

int main(void)
{
    {
        FragTrap frag("Yumna");
        frag.attack("Monster");
        frag.takeDamage(100);
        frag.beRepaired(10);
        frag.attack("Monster");
        frag.highFiveGuys();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        FragTrap frag("Yumna");
        FragTrap bob(frag);
        bob.attack("Monster");
        FragTrap james;
        james = bob;
        james.highFiveGuys();
    }
}