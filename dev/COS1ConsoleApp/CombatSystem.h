
#pragma once
#include "Fighter.h"

class CombatSystem
{
private:
    int turnNumber;

public:
    CombatSystem();

    // Handles attacks between fighters
    void Attack(Fighter& attacker, Fighter& defender);

    // NEW: Returns the current turn number
    int GetTurnNumber() const;

    // NEW: Advances to the next turn
    void NextTurn();
};
