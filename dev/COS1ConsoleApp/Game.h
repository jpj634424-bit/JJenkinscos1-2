
#pragma once
#include "Fighter.h"
class Game
{
private:
    bool isRunning;
    void ShowBattleResults(const Fighter& player, const Fighter& enemy);

public:
    // Constructor
    Game();

    // Starts the game
    void Run();

    // Displays the main menu
    void ShowMenu();

    // UPDATED: Returns true if the battle finishes,
     // or false if the player leaves early
    bool StartGame();

    // UPDATED: Displays fighter information and combat options
    void ShowCombatMenu(const Fighter& player, const Fighter& enemy);
};
