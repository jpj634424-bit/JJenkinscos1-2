
#include "CombatSystem.h"
#include <iostream>

// CombatSystem constructor
CombatSystem::CombatSystem()
{
    turnNumber = 1;
}


void CombatSystem::Attack(Fighter& attacker, Fighter& defender)
{
    // Calculate damage
    int damage = attacker.GetAttackPower() - defender.GetDefense();

    // Prevent negative damage
    if (damage < 0)
    {
        damage = 0;
    }

    // NEW: Check whether the defender is defending
    if (defender.IsDefending())
    {
        // Reduce incoming damage by 50%
        damage = damage / 2;

        std::cout << defender.GetName()
            << " is defending! Damage is reduced!\n";

        // Defensive stance ends after this attack
        defender.StopDefending();
    }

    // Apply damage to the defender
    defender.TakeDamage(damage);

    // Display attack information
    std::cout << attacker.GetName() << " attacks "
        << defender.GetName() << "!\n";

    std::cout << defender.GetName() << " takes "
        << damage << " damage!\n";

    std::cout << defender.GetName() << " has "
        << defender.GetHealth()
        << " health remaining.\n";
}


// NEW: Returns the current turn number
int CombatSystem::GetTurnNumber() const
{
    return turnNumber;
}

// NEW: Advances to the next turn
void CombatSystem::NextTurn()
{
    turnNumber++;
}
