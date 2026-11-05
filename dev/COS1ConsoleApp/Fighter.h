
#pragma once
#include <string>

class Fighter
{
private:
    std::string name;
    int health;
    int attackPower;
    int defense;

    // NEW: Tracks whether the fighter is defending
    bool isDefending;

public:
    // Constructor
    Fighter(std::string fighterName, int fighterHealth,
        int fighterAttack, int fighterDefense);

    // Getter methods
    std::string GetName() const;
    int GetHealth() const;
    int GetAttackPower() const;
    int GetDefense() const;

    // Damage method
    void TakeDamage(int damage);

    // Check if defeated
    bool IsDefeated() const;

    // NEW: Activates defensive stance
    void Defend();

    // NEW: Checks if fighter is defending
    bool IsDefending() const;

    // NEW: Ends defensive stance
    void StopDefending();
};
