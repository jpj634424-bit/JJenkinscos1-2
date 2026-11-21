
#pragma once
#include "Fighter.h"

class CombatSystem
{
private:
	int turnNumber;

	static int CalculateDamage(const Fighter& attacker, const Fighter& defender);


public:
	CombatSystem();

	// Handles attacks between fighters
	void Attack(Fighter& attacker, Fighter& defender);

	// Returns the current turn number
	int GetTurnNumber() const;

	// Advances to the next turn
	void NextTurn();
};
