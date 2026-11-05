
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
            std::cout << "\nInvalid choice. Please try again.\n";
        }
    }
}

// NEW: Starts a combat match
void Game::StartGame()
{
    // Create two fighters
    Fighter player("Warrior", 100, 20, 10);
    Fighter enemy("Knight", 100, 15, 5);

    // Create the combat system
    CombatSystem combat;

    std::cout << "\n=== Combat Begins ===\n\n";

    // Continue until one fighter is defeated
    while (!player.IsDefeated() && !enemy.IsDefeated())
    {
        // Display current turn
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

