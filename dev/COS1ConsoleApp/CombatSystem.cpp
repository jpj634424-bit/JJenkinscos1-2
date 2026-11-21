
#include "CombatSystem.h"
#include <iostream>

// CombatSystem constructor
CombatSystem::CombatSystem()
{
    turnNumber = 1;
}


void CombatSystem::Attack(Fighter& attacker, Fighter& defender)
{
    // Calculate damage using the helper function
    int damage = CalculateDamage(attacker, defender);

    // NEW: Announce the attack before calculating defense
    std::cout << "\n=== ATTACK ===\n";
    std::cout << attacker.GetName() << " attacks "
        << defender.GetName() << "!\n";

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

    // Limit damage to the defender's remaining health
    if (damage > defender.GetHealth())
    {
        damage = defender.GetHealth();
    }

    // Apply damage to the defender
    defender.TakeDamage(damage);

    // Display attack information

    std::cout << defender.GetName() << " takes "
        << damage << " damage!\n";

    std::cout << defender.GetName() << " has "
        << defender.GetHealth()
        << " health remaining.\n";
}

int CombatSystem::CalculateDamage(Fighter& attacker, Fighter& defender)
{
    // Calculate damage based on attack and defense
    int damage = attacker.GetAttackPower() - defender.GetDefense();

    // Prevent damage from becoming negative
    if (damage < 0)
    {
        damage = 0;
    }

    // Return the calculated damage
    return damage;
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
