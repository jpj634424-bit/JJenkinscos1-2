
#include "Game.h"
#include "Fighter.h"       // NEW
#include "CombatSystem.h"  // NEW
#include <iostream>
#include <string> // NEW: Allows us to store menu input

// Game constructor
Game::Game()
{
    isRunning = true;
}

// NEW: Displays the main menu
void Game::ShowMenu()
{
    std::cout << "\n";
    std::cout << "================================\n";
    std::cout << "         CONSOLE FIGHTER        \n";
    std::cout << "================================\n";
    std::cout << "1. Start Game\n";
    std::cout << "2. How to Play\n";
    std::cout << "3. Exit\n";
    std::cout << "================================\n";
    std::cout << "Enter your choice: ";
}

// NEW: Controls the main game loop
void Game::Run()
{
    std::string choice;

    // Keep displaying the menu while the game is running
    while (isRunning)
    {
        ShowMenu();

        // Get the player's selection
        std::getline(std::cin, choice);

        // Stop if input is unavailable
        if (!std::cin)
        {
            isRunning = false;
            break;
        }

        
            // Check if the player entered nothing
            if (choice.empty())
            {
                std::cout << "\nYou did not enter a choice.\n";
                std::cout << "Please enter 1, 2, or 3.\n";
                continue;
            }
        

        // Process the player's selection
        if (choice == "1")
        {
            // NEW: Start an actual combat match
            StartGame();
        }
        else if (choice == "2")
        {
            std::cout << "\n=== HOW TO PLAY ===\n";
            std::cout << "Your fighter battles against an enemy.\n";
            std::cout << "Fighters take turns attacking.\n";
            std::cout << "Reduce your opponent's health to zero to win!\n";
        }
        else if (choice == "3")
        {
            std::cout << "\nThanks for playing Console Fighter!\n";
            isRunning = false;
        }
        else
        {
            std::cout << "\nInvalid choice: " << choice << "\n";
            std::cout << "Please enter 1, 2, or 3.\n";
        }
    }
}

// NEW: Starts a combat match
void Game::StartGame()
{
    // Display battle instructions
    std::cout << "\n================================\n";
    std::cout << "        BATTLE START!\n";
    std::cout << "================================\n";
    std::cout << "Get ready for combat!\n";
    std::cout << "Fighters will take turns attacking.\n";
    std::cout << "Reduce your opponent's health to zero to win!\n";
    std::cout << "================================\n\n";

    // Create two fighters
    Fighter player("Warrior", 100, 20, 10);
    Fighter enemy("Knight", 100, 15, 5);

    // Create the combat system
    CombatSystem combat;

    std::cout << "\n=== Combat Begins ===\n\n";

    // Continue until one fighter is defeated
    while (!player.IsDefeated() && !enemy.IsDefeated())
    {
        // UPDATED: Display turn number and active fighter
        std::cout << "\n================================\n";
        std::cout << "            TURN "
            << combat.GetTurnNumber() << "\n";

        if (combat.GetTurnNumber() % 2 == 1)
        {
            std::cout << "         PLAYER'S TURN\n";
        }
        else
        {
            std::cout << "          ENEMY'S TURN\n";
        }

        std::cout << "================================\n";

        // Alternate attacks

        if (combat.GetTurnNumber() % 2 == 1)
        {
            // NEW: Store the player's combat choice
            std::string action;
            bool validAction = false;

            // NEW: Ask the player to choose an action
            while (!validAction)
            {
                // UPDATED: Pass both fighters to the combat menu
                ShowCombatMenu(player, enemy);

                std::getline(std::cin, action);

                // Stop if input is unavailable
                if (!std::cin)
                {
                    std::cout << "\nEnding match.\n";
                    return;
                }


                if (action == "1" || action == "A" || action == "a")
                {
                    // Player attacks the enemy
                    combat.Attack(player, enemy);
                    validAction = true;
                }
                else if (action == "2" || action == "D" || action == "d")
                {
                    // Player activates defensive stance
                    player.Defend();

                    std::cout << "\n" << player.GetName()
                        << " takes a defensive stance!\n";

                    validAction = true;
                }
                else if (action.empty())
                {
                    // NEW: Handle empty input
                    std::cout << "\nYou must enter a choice.\n";
                }
                else
                {
                    // NEW: Explain the available choices
                    std::cout << "\nInvalid choice!\n";
                    std::cout << "Enter 1 or A to Attack.\n";
                    std::cout << "Enter 2 or D to Defend.\n";
                }

            }
        }
        else
        {
            // Computer attacks automatically
            combat.Attack(enemy, player);
        }


        std::cout << "\n";

        // Advance if both fighters are still alive
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

    std::cout << "\nReturning to main menu...\n";
}




void Game::ShowCombatMenu(const Fighter& player, const Fighter& enemy)
{
    std::cout << "\n";
    std::cout << "================================\n";
    std::cout << "           YOUR TURN            \n";
    std::cout << "================================\n";

    // NEW: Display fighter health
    std::cout << player.GetName() << " HP: "
        << player.GetHealth() << "\n";

    std::cout << enemy.GetName() << " HP: "
        << enemy.GetHealth() << "\n";

    std::cout << "================================\n";

    // Combat actions
    std::cout << "1. Attack (A)\n";
    std::cout << "2. Defend (D)\n";
    std::cout << "================================\n";
    std::cout << "Enter your choice: ";
}

