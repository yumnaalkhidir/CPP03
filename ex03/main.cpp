#include "DiamondTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
    {
        DiamondTrap yumna;
        yumna.attack("Goblin");
        yumna.whoAmI();
        DiamondTrap diamond("Yumna");
        diamond.whoAmI();
        diamond.guardGate();
        diamond.highFiveGuys();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap original("Alpha");
        DiamondTrap copy(original);
        copy.attack("Troll");
        copy.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap a("One");
        DiamondTrap b("Two");
        DiamondTrap c;
        a.attack("Monster1");
        b.attack("Monster2");
        c = a;
        c.attack("Monster3");
        a.whoAmI();
        b.whoAmI();
        c.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;

    return 0;
}
