# Milestone 3 – Console Fighter

**Course:** Project and Portfolio I: Computer Science – Online

## Project Overview

For Milestone 3, I focused on improving my Console Fighter game by adding new features, organizing my code, and making the gameplay experience better. Building on the progress I made during Milestone 2, I worked on improving the combat system, handling player input more effectively, and displaying more detailed battle results.

One of my main goals was to make the program easier to read and maintain without changing how the existing combat mechanics work. I separated some of the larger sections of code into smaller functions, reduced duplicated code, and improved the instructions that players see when using the game. These changes helped me better understand how refactoring and code organization can improve a C++ project as it continues to grow.

## Features Added

### Improved Player Input Validation

I improved the way my game handles player input in the main menu, combat menu, and replay menu. I added a reusable TrimInput() function that removes extra spaces from the beginning and end of player input. This makes the menus easier to use because players can enter their choices with extra spaces without causing an invalid selection.

### End-of-Battle Results Summary

I expanded the battle results system to give players more information after completing a fight. The game now displays a victory or defeat message, announces the winner, and shows the remaining health of both fighters. This makes the end of each battle clearer and gives players a better understanding of the results.

### Updated How to Play Instructions

I improved the How to Play menu to explain the game's combat mechanics in more detail. The updated instructions explain how to attack, defend, use keyboard shortcuts, win battles, and replay matches. I also included information about how defending reduces incoming damage by 50%. These changes make it easier for new players to understand how the game works.

## System Design Updates

### CombatSystem Class Improvements

During Milestone 3, I improved the organization of my `CombatSystem` class by creating a separate `CalculateDamage()` function. Before making this change, the `Attack()` function handled both damage calculations and the attack process. I moved the basic damage calculation and negative damage prevention into the new function.

This change allows `Attack()` to focus more on performing attacks, checking defensive stances, and displaying combat information. It also makes the damage calculation easier to modify if I decide to add new fighting mechanics in the future.

### Game Class Improvements

I also improved the structure of my `Game` class by creating a separate `ShowBattleResults()` function. Previously, the battle results were displayed directly inside `StartGame()`, which already handles creating fighters and running the combat loop.

By moving the results into their own function, I made `StartGame()` shorter and easier to understand. The new function handles displaying the winner, victory or defeat messages, and both fighters' remaining health.

### Reusable Input Handling

Another improvement was adding the `TrimInput()` helper function inside `Game.cpp`. Instead of writing the same whitespace-handling code for different menus, I created one function that can be reused throughout the program.

The main menu, combat menu, and replay menu now use this function to process player input consistently. This reduces duplicated code and makes future improvements easier to manage.

## Refactoring Improvements

### Separating Damage Calculations

One of my main refactoring improvements was moving the damage calculation logic out of `CombatSystem::Attack()` and into a separate `CalculateDamage()` function. Previously, `Attack()` calculated damage, checked for negative values, processed defensive stances, and applied damage.

By separating the basic calculation into its own function, I reduced the amount of code inside `Attack()` and made the combat system easier to understand. This also gives me a specific place to update damage calculations if I expand the combat mechanics later.

### Reducing Duplicated Input Handling

Another improvement was creating a reusable `TrimInput()` function. I initially added whitespace-handling code directly inside the combat menu. After getting that working, I moved the logic into a helper function that the main menu, combat menu, and replay menu could all use.

This removed unnecessary duplication and made input handling more consistent throughout the game.

### Simplifying Battle Results

I also refactored the `Game::StartGame()` function by moving the battle results display into `ShowBattleResults()`. This function now handles the victory and defeat messages, winner announcement, and final health information.

Separating the results from the main combat loop made `StartGame()` easier to read and gave each function a clearer responsibility.

### Improving Code Readability

Finally, I cleaned up parts of `Game.cpp` by correcting inconsistent indentation and updating outdated comments. Instead of leaving comments like `NEW` or `UPDATED`, I changed some of them to describe what the code actually does.

These changes did not affect gameplay, but they made the code easier to follow and maintain.

## What Changed and Why

During Milestone 3, I wanted to focus on making my Console Fighter project better organized while also improving the player's experience. As I continued developing the game, I realized that some functions were becoming longer and handling too many responsibilities.

One of my biggest changes was separating the damage calculations from the main attack function. I made this change because I wanted the combat system to be easier to understand and modify. By giving the damage calculation its own function, I can add more advanced fighting mechanics later without having to rewrite the entire attack system.

I also improved how the game handles player input. I noticed that players could accidentally enter extra spaces when making menu selections, which would cause their choices to be rejected. Creating the `TrimInput()` function helped solve this problem while allowing me to reuse the same code across multiple menus.

Another important improvement was adding more detailed battle results. Previously, the game only announced which fighter won. I wanted players to receive more information about their performance, so I added victory and defeat messages along with both fighters' remaining health. Moving these results into a separate function also helped keep the main gameplay code organized.

Finally, I updated the How to Play instructions and cleaned up parts of my code. These changes helped make the game easier for new players to understand and made the source code easier to read.

Overall, Milestone 3 helped me better understand the importance of refactoring, reusable functions, and maintaining good code organization. I learned that improving an existing program is just as important as adding new features. These improvements have given me a stronger foundation for continuing to develop my fighting game in the next milestone.