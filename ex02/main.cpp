#include "FragTrap.hpp"

int main(void)
{
    {
        FragTrap frag("Yumna");
        frag.print();
        frag.attack("Monster");
        frag.takeDamage(100);
        frag.beRepaired(10);
        frag.attack("Monster");
        frag.print();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        FragTrap frag("Yumna");
        FragTrap bob(frag);
        bob.attack("Monster");
        FragTrap james;
        james = bob;
        frag.print();
        bob.print();
        james.print();
    }
}