
#pragma once
#include "Fighter.h"
class Game
{
private:
    bool isRunning;

public:
    // Constructor
    Game();

    // Starts the game
    void Run();

    // Displays the main menu
    void ShowMenu();

    // Starts a combat match
    void StartGame();

    // UPDATED: Displays fighter information and combat options
    void ShowCombatMenu(const Fighter& player, const Fighter& enemy);
};
