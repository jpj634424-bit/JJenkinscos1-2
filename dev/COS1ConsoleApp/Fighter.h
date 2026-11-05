
#pragma once
#include <string>

class Fighter
{
private:
    std::string name;
    int health;
    int attackPower;
    int defense;

public:
    Fighter(std::string fighterName, int fighterHealth,
        int fighterAttack, int fighterDefense);

    // Getter methods
    std::string GetName() const;
    int GetHealth() const;
    int GetAttackPower() const;
    int GetDefense() const;

    // Damage method
    void TakeDamage(int damage);

    // NEW: Check if the fighter has been defeated
    bool IsDefeated() const;
};
