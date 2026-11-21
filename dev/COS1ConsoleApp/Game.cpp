
#include "Game.h"
#include "Fighter.h"       // NEW
#include "CombatSystem.h"  // NEW
#include <iostream>
#include <string> // Allows us to store menu input

// Reusable function for removing extra spaces
namespace
{
	std::string TrimInput(const std::string& input)
	{
		// Find the first character that is not a space or tab
		size_t first = input.find_first_not_of(" \t");

		if (first == std::string::npos)
		{
			return "";
		}

		// Find the last character that is not a space or tab
		size_t last = input.find_last_not_of(" \t");

		// Return the input without extra spaces
		return input.substr(first, last - first + 1);
	}
}


// Game constructor
Game::Game()
	: isRunning(true)
{
}


// Displays the main menu
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

// Controls the main game loop

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

		// Remove extra spaces from main menu input
		choice = TrimInput(choice);

		// Check for empty input
		if (choice.empty())
		{
			std::cout << "\nYou did not enter a choice.\n";
			std::cout << "Please enter 1, 2, or 3.\n";
			continue;
		}

		if (choice == "1")
		{
			// Allow players to replay battles
			bool playAgain = true;

			while (playAgain && isRunning)
			{
				bool battleCompleted = StartGame();

				// Stop if input is unavailable
				if (!std::cin)
				{
					isRunning = false;
					break;
				}

				// Return to main menu if battle was canceled
				if (!battleCompleted)
				{
					break;
				}

				std::string replayChoice;

				// Ask until the player enters a valid option
				while (true)
				{
					std::cout << "\n=== BATTLE COMPLETE ===\n";
					std::cout << "Would you like to fight again?\n";
					std::cout << "1. Play Again\n";
					std::cout << "2. Return to Main Menu\n";
					std::cout << "Enter your choice: ";

					std::getline(std::cin, replayChoice);

					if (!std::cin)
					{
						isRunning = false;
						playAgain = false;
						break;
					}

					// Remove extra spaces from replay input
					replayChoice = TrimInput(replayChoice);

					if (replayChoice == "1")
					{
						// Start another battle
						break;
					}
					else if (replayChoice == "2")
					{
						// Stop replaying battles
						playAgain = false;
						break;
					}
					else
					{
						std::cout << "\nInvalid choice! Enter 1 or 2.\n";
					}
				}
			}
		}
		else if (choice == "2")
		{
			// Display gameplay instructions
			std::cout << "\n================================\n";
			std::cout << "          HOW TO PLAY           \n";
			std::cout << "================================\n";
			std::cout << "Your fighter battles against an enemy.\n";
			std::cout << "Players and enemies take turns.\n\n";

			std::cout << "COMBAT ACTIONS:\n";
			std::cout << "1 or A - Attack your opponent.\n";
			std::cout << "2 or D - Defend against the next attack.\n";
			std::cout << "3 or M - Leave battle and return to the main menu.\n\n";

			std::cout << "DEFENDING:\n";
			std::cout << "Defending reduces incoming damage by 50%.\n";
			std::cout << "Your defensive stance ends after an attack.\n\n";

			std::cout << "WINNING:\n";
			std::cout << "Reduce your opponent's health to zero to win!\n";
			std::cout << "View the battle results after each match.\n";
			std::cout << "You can choose to play again after a battle.\n";
			std::cout << "================================\n";
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

// Starts a combat match

// Starts a combat match
bool Game::StartGame()
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
		// Display turn number and active fighter
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
			// Store the player's combat choice
			std::string action;
			bool validAction = false;

			// Ask the player to choose an action
			while (!validAction)
			{
				// Pass both fighters to the combat menu
				ShowCombatMenu(player, enemy);

				std::getline(std::cin, action);

				// Stop if input is unavailable
				if (!std::cin)
				{
					std::cout << "\nEnding match.\n";
					return false;
				}

				// Use reusable input trimming function
				action = TrimInput(action);

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

				else if (action == "3" || action == "M" || action == "m")
				{
					// Allow the player to leave the current battle
					std::cout << "\nLeaving battle...\n";
					std::cout << "Returning to the main menu.\n";

					return false;
				}

				else if (action.empty())
				{
					// Handle empty input
					std::cout << "\nYou must enter a choice.\n";
				}

				else
				{
					// Explain the available combat choices
					std::cout << "\nInvalid choice!\n";
					std::cout << "Enter 1 or A to Attack.\n";
					std::cout << "Enter 2 or D to Defend.\n";
					std::cout << "Enter 3 or M to Return to Main Menu.\n";
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
	// Display battle results using a separate function
	ShowBattleResults(player, enemy);
	// Tell the game that the battle finished normally
	return true;

}


void Game::ShowCombatMenu(const Fighter& player, const Fighter& enemy)
{
	std::cout << "\n";
	std::cout << "================================\n";
	std::cout << "           YOUR TURN            \n";
	std::cout << "================================\n";

	// Display fighter health
	std::cout << player.GetName() << " HP: "
		<< player.GetHealth() << "\n";

	std::cout << enemy.GetName() << " HP: "
		<< enemy.GetHealth() << "\n";

	std::cout << "================================\n";


	// Combat actions
	std::cout << "1. Attack (A)\n";
	std::cout << "2. Defend (D)\n";

	// Allow players to return to the main menu

	std::cout << "3. Return to Main Menu (M)\n";

	std::cout << "================================\n";
	std::cout << "Enter your choice: ";


}
// Display the results of a completed battle
void Game::ShowBattleResults(const Fighter& player, const Fighter& enemy)
{
	// Display battle results heading
	std::cout << "\n================================\n";
	std::cout << "         BATTLE RESULTS         \n";
	std::cout << "================================\n";

	// Announce the winner
	if (enemy.IsDefeated())
	{
		std::cout << "\n*** VICTORY! ***\n";
		std::cout << player.GetName() << " wins!\n";
		std::cout << "You defeated "
			<< enemy.GetName() << "!\n";
	}
	else
	{
		std::cout << "\n*** DEFEAT! ***\n";
		std::cout << enemy.GetName() << " wins!\n";
		std::cout << "You were defeated by "
			<< enemy.GetName() << ".\n";
	}

	// Display both fighters' remaining health
	std::cout << "\n--- FINAL HEALTH ---\n";

	std::cout << player.GetName() << " HP: "
		<< player.GetHealth() << "\n";

	std::cout << enemy.GetName() << " HP: "
		<< enemy.GetHealth() << "\n";

	std::cout << "\nThe battle has ended!\n";
}