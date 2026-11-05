
#include <iostream>
#include "Fighter.h"

int main()
{
    // TEST 1: Create a fighter
    Fighter player("Warrior", 100, 20, 10);

    // TEST 2: Display fighter information
    std::cout << "Fighter: " << player.GetName() << "\n";
    std::cout << "Health: " << player.GetHealth() << "\n";
    std::cout << "Attack: " << player.GetAttackPower() << "\n";
    std::cout << "Defense: " << player.GetDefense() << "\n";

    // TEST 3: Apply damage
    player.TakeDamage(30);

    std::cout << "\nAfter taking 30 damage:\n";
    std::cout << "Health: " << player.GetHealth() << "\n";

    // TEST 4: Check defeat status
    player.TakeDamage(100);

    if (player.IsDefeated())
    {
        std::cout << "\nThe fighter has been defeated!\n";
    }

    return 0;
}
