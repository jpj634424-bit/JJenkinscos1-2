
#include <iostream>
#include "Fighter.h"
#include "CombatSystem.h"

int main()
{
    // NEW: Stores the player's replay choice
    char playAgain;

    // NEW: Outer loop allows multiple matches
    do
    {
        // Create fresh fighters for each match
        Fighter player("Warrior", 100, 20, 10);
        Fighter enemy("Knight", 100, 15, 5);

        // Create a new combat system
        CombatSystem combat;

        std::cout << "=== Combat Begins ===\n\n";

        // Continue until one fighter is defeated
        while (!player.IsDefeated() && !enemy.IsDefeated())
        {
            std::cout << "Turn "
                << combat.GetTurnNumber() << "\n";

            // Alternate attacks
            if (combat.GetTurnNumber() % 2 == 1)
            {
                combat.Attack(player, enemy);
            }
            else
            {
                combat.Attack(enemy, player);
            }

            std::cout << "\n";

            if (!player.IsDefeated() && !enemy.IsDefeated())
            {
                combat.NextTurn();
            }
        }

        // Announce the winner
        std::cout << "=== Combat Over ===\n";

        if (enemy.IsDefeated())
        {
            std::cout << player.GetName() << " wins!\n";
        }
        else
        {
            std::cout << enemy.GetName() << " wins!\n";
        }

        // NEW: Ask the player to play again
        std::cout << "\nWould you like to play again? (Y/N): ";
        std::cin >> playAgain;

        std::cout << "\n";

        // NEW: Repeat if player enters Y or y
    } while (playAgain == 'Y' || playAgain == 'y');

    // NEW: Goodbye message
    std::cout << "Thanks for playing Console Fighter!\n";

    return 0;
}
