
# Milestone 4 - Final Project Development

## Project Name
Console Fighter

## Project Overview

Console Fighter is a C++ console-based fighting game that allows
the player to participate in turn-based combat against a computer-
controlled opponent. The application uses object-oriented
programming through the Game, Fighter, and CombatSystem classes.

During Milestone 4, I focused on completing the application,
improving usability, resolving bugs, refactoring existing code,
and performing final testing.

## Features Completed and Added

### Return to Main Menu During Combat

I added a third option to the combat menu that allows the player
to leave an active battle and return directly to the main menu.

The player can enter 3, M, or m to leave the battle. Previously,
the player had to complete an entire battle before returning
to the main menu.

I also updated the StartGame() function to return a Boolean
value so the application can determine whether a battle was
completed or canceled.

### Combat Damage Accuracy

I improved the combat system by limiting damage to the
defender's remaining health.

Previously, a fighter with 10 health remaining could receive
a message stating that they took 15 damage. The updated
combat system now reports 10 damage, which accurately
represents the amount of health lost.

### Completed Core Features

- Main menu navigation
- How to Play instructions
- Turn-based combat
- Player attacks
- Automatic enemy attacks
- Defensive stance
- Fighter health tracking
- Damage calculations
- Turn counter
- Victory and defeat results
- Play Again functionality
- Return to Main Menu during combat
- Input validation
- Application exit

## Refactoring and Code Improvements

I reviewed and improved the organization of my source code
to make the application easier to read and maintain.

The following improvements were completed:

- Simplified the IsDefeated() function by returning a Boolean
  expression instead of using unnecessary conditional statements.
- Updated the Fighter, Game, and CombatSystem constructors
  to use member initializer lists.
- Improved const correctness in CalculateDamage() by using
  constant references.
- Removed outdated NEW and UPDATED comment labels.
- Improved indentation, spacing, and code formatting.
- Maintained separation of responsibilities between classes.

These improvements helped make my code more organized,
consistent, and easier to understand without changing
the intended gameplay mechanics.

## Bugs Resolved

During final development, I encountered several issues
that needed to be corrected.

- Fixed a missing closing brace that caused a compilation error.
- Removed duplicated code from the main game loop.
- Corrected the placement of the battle completion logic.
- Restored the missing combat input prompt.
- Prevented canceled battles from displaying battle results
  or the replay menu.
- Corrected combat damage reporting when a fighter's
  remaining health was lower than the calculated damage.

I also encountered a Windows application control restriction
that prevented the compiled executable from launching.
After troubleshooting the issue, I was able to resume testing.

## Usability Improvements

I improved the overall player experience by providing
clearer navigation and more accurate gameplay feedback.

The following usability improvements were completed:

- Added the ability to leave an active battle.
- Added uppercase and lowercase keyboard shortcuts
  for returning to the main menu.
- Updated the How to Play instructions.
- Updated invalid combat input messages.
- Improved the accuracy of combat damage messages.
- Ensured new battles reset fighter health and turn numbers.
- Maintained consistent menu formatting.

## Final Testing

I performed final regression testing to make sure that
the new improvements did not negatively affect existing
application features.

| Testing Category | Tests Passed |
| --- | --- |
| Main Menu and Navigation | 5/5 |
| Combat Mechanics | 7/7 |
| Battle Results | 5/5 |
| Replay and Navigation | 6/6 |
| Total | 23/23 |

All 23 final regression tests passed.

The application successfully compiled, launched, and
performed its intended gameplay functions during testing.

## GitHub Project Management

I created and completed three GitHub Issues during
Milestone 4:

1. Add Return to Main Menu Option During Combat
2. Improve Combat Damage Reporting Accuracy
3. Refactor and Clean Up Final Application Code

These Issues were connected to my GitHub Project board
and moved to Done after implementation and testing.

## Conclusion

Milestone 4 allowed me to bring together everything I
worked on throughout the development of Console Fighter.

I improved the functionality, usability, readability,
and stability of my application. I also gained more
experience with debugging, testing, object-oriented
programming, and GitHub project management.

This project helped me build confidence in my ability
to develop a complete C++ application and provided
a foundation for creating more advanced fighting
games in the future.
