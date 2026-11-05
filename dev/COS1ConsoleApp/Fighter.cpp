
#include "Fighter.h"

// Fighter constructor
Fighter::Fighter(std::string fighterName, int fighterHealth,
    int fighterAttack, int fighterDefense)
{
    name = fighterName;
    health = fighterHealth;
    attackPower = fighterAttack;
    defense = fighterDefense;

    // NEW: Fighters start without defending
    isDefending = false;
}

// NEW: Returns the fighter's name
std::string Fighter::GetName() const
{
    return name;
}

// NEW: Returns the fighter's health
int Fighter::GetHealth() const
{
    return health;
}

// NEW: Returns the fighter's attack power
int Fighter::GetAttackPower() const
{
    return attackPower;
}

// NEW: Returns the fighter's defense
int Fighter::GetDefense() const
{
    return defense;
}

// NEW: Reduces the fighter's health when attacked
void Fighter::TakeDamage(int damage)
{
    // Ignore negative or zero damage
    if (damage <= 0)
    {
        return;
    }

    // Subtract damage from health
    health -= damage;

    // Prevent health from dropping below zero
    if (health < 0)
    {
        health = 0;
    }
}

// NEW: Checks if the fighter has been defeated
bool Fighter::IsDefeated() const
{
    if (health <= 0)
    {
        return true;
    }

    return false;
}

// NEW: Activates the defensive stance
void Fighter::Defend()
{
    isDefending = true;
}

// NEW: Returns whether the fighter is defending
bool Fighter::IsDefending() const
{
    return isDefending;
}

// NEW: Deactivates the defensive stance
void Fighter::StopDefending()
{
    isDefending = false;
}
