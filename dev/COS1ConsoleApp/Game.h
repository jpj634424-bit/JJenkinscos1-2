
#pragma once

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
};
