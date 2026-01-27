#include "DiamondTrap.hpp"

#include "DiamondTrap.hpp"

int main()
{
    {
        DiamondTrap dt1;
        dt1.print();
        dt1.attack("Goblin");
        dt1.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap dt2("Yumna");
        dt2.print();
        dt2.attack("Orc");
        dt2.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap original("Alpha");
        DiamondTrap copy(original);
        copy.print();
        copy.attack("Troll");
        copy.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap dt3("Beta");
        DiamondTrap dt4;
        dt4 = dt3;
        dt4.print();
        dt4.attack("Dragon");
        dt4.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;
    {
        DiamondTrap a("One");
        DiamondTrap b("Two");
        DiamondTrap c;
        a.attack("Monster1");
        b.attack("Monster2");
        c.attack("Monster3");
        a.whoAmI();
        b.whoAmI();
        c.whoAmI();
    }
    std::cout << "-------------------------------------" << std::endl;

    return 0;
}
