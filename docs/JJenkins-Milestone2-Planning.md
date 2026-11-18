> Use this worksheet to plan the next phase of your project **before you begin coding**
> Be clear, specific, and intentional—this will guide your development this week.

---
## 📌 Project Overview

**Project Name:**
→   Turn-Based Fighting Game
  
**What does your program currently do? (1–3 sentences)**   
→ My program is a C++ console-based fighting game where fighters compete against each other in a turn-based combat system. Players can perform attacks and defend themselves to reduce incoming damage. The program uses the Fighter and CombatSystem classes to manage fighter attributes, calculate damage, and track health during combat.

---
## 🔍 Current Progress Check  
  
**What is working right now?**   
→   Right now, my fighting game has a working Fighter class and CombatSystem class. Fighters have attributes such as health, attack power, and defense. The combat system allows fighters to attack each other, calculate damage, and reduce their opponent's health. I have also implemented a defending mechanic that reduces incoming damage by 50%. The program displays combat information so players can see what is happening during each turn.
  
**What is NOT working or incomplete?**   
→   My fighting game has the basic combat system implemented, but there are still features I want to expand. I would like to add more variety to combat through special attacks and different fighter abilities. I also want to improve the player interaction by making the combat menu easier to navigate and providing clearer information during battles. Another feature I would like to add is a system that tracks wins and losses so players can see their results after each match.
  
**What feels confusing or messy in your code?**   
→ One thing that is becoming more challenging is keeping my combat system organized as I add new features. I want to make sure that my Fighter and CombatSystem classes have clear responsibilities and that I am not putting too much code into one function. I also want to improve how my program handles player choices and transitions between turns. As the project grows, I need to focus on keeping my code readable and making it easier to add new features without breaking what already works.

---
## 🚀 Feature Planning  
  
List the features you plan to add or improve this week.  
  
### Feature 1  
**Name:**   
→   Special Attack System
  
**What does this feature do?**   
→   This feature will allow fighters to perform special attacks that deal more damage than regular attacks. Each fighter will have a limited amount of energy that they can use to perform these attacks. Players will be able to choose between regular attacks, defending, and using a special attack during their turn. The system will check whether the fighter has enough energy before allowing the special attack.
  
**Why is this feature important?**   
→   This feature is important because it will make the combat system more interesting and give players more choices during battles. Instead of only attacking or defending, players will need to think about when to use their special attacks. Adding an energy system will also help balance the gameplay and create more strategy during each match.
  
---
### Feature 2  
**Name:**   
→   Improved Combat Menu
  
**What does this feature do?**   
→   This feature will improve the combat menu by giving players clear options to choose from during their turn. The menu will display actions such as attacking, defending, using a special attack, and viewing fighter stats. Players will select their actions by entering a number, and the program will respond based on their choice. The menu will also display updated health and energy information so players can keep track of their fighter's condition throughout the battle.
  
**Why is this feature important?**   
→   This feature is important because it will make my fighting game easier to understand and play. A clear combat menu will help players know what actions are available and prevent confusion during battles. It will also make the program feel more organized and allow me to add additional combat options in the future without making the code too complicated.
  
---
  
### Feature 3 (optional)  
**Name:**   
→   Win/Loss Tracking System
  
**What does this feature do?**   
→   This feature will allow my fighting game to keep track of how many matches a player wins or loses. At the end of each battle, the program will determine the winner based on which fighter still has health remaining. The system will update the player's win or loss count and display their overall record. Players will also be able to view their match results before starting another battle.
  
**Why is this feature important?**   
→   This feature is important because it gives players a way to track their progress and see how well they are performing over multiple matches. It also makes the game more engaging by giving players a reason to improve their strategies and try to win more battles. Adding this system will help me practice working with variables, class methods, and updating information as the program runs.
  
---
## 🧩 System Design Updates  
  
**Will you need to create any new classes? If so, which ones?**   
→   I plan to create a new class called MatchTracker to manage the player's wins and losses. This class will keep track of match results and allow players to view their overall record. I will continue using my existing Fighter and CombatSystem classes for most of the combat features. By keeping these responsibilities separated, I can make my code more organized and easier to expand as I add more features.
  
**Will you modify any existing classes? How?**   
→   I plan to modify my Fighter and CombatSystem classes to support the new features. In the Fighter class, I will add an energy attribute and methods that allow fighters to use energy for special attacks. In the CombatSystem class, I will add functions to calculate special attack damage and check whether a fighter has enough energy to perform the attack. I will also update my main program to include an improved combat menu with options for attacking, defending, using special attacks, and viewing fighter stats. These changes will allow me to expand my game while keeping the code organized.
  
**What data structures will you use (vectors, 2D vectors, etc.)?**   
→   I plan to continue using classes and objects to organize the information for my fighters and combat system. Each Fighter object will store attributes such as health, attack power, defense, and energy. I will use integer variables in my MatchTracker class to keep track of wins and losses. I may also use a vector to store multiple Fighter objects if I decide to add a character selection feature. These data structures will help keep my program organized and make it easier to add more features in the future.
  
---
## 🔄 Program Flow  
  
**Describe how a user interacts with your program:**  
  
1. **Program starts →** The game displays a welcome message and a main menu where players can start a match, view their win/loss record, or exit the program.
    
2. **User chooses →** The player starts a match and selects an action from the combat menu, including attacking, defending, using a special attack, or viewing fighter stats.
    
3. **Program responds →** The combat system processes the player's choice, calculates damage, updates health and energy, and displays the results of the action.
    
4. **Loop/next step →** The game continues through combat turns until one fighter is defeated. The program announces the winner, updates the player's record, and returns to the main menu so another match can begin.
  
---
## 🎯 Usability Improvements  
  
How will you make your program easier to use this week?  
  
- Clearer prompts:   
→   I plan to improve the prompts in my fighting game by making the instructions and menu options easier to understand. Each combat action will have a clear description so players know what they are choosing. I will also display helpful messages when a player attacks, defends, or uses a special attack. The game will show updated health and energy information after each turn so players can better understand what is happening during battles.
  
- Better error handling:   
→   I plan to improve error handling by making sure my game can recognize invalid player inputs and respond without crashing. If a player enters an incorrect menu option, the program will display a message explaining the mistake and allow them to try again. I will also add checks to prevent players from using special attacks when they do not have enough energy. These improvements will help the game run more smoothly and make it easier for players to understand what went wrong.
  
- Improved menu/navigation:   
→   I plan to improve my game's menu system by creating a more organized main menu and combat menu. The main menu will allow players to start a new match, view their win/loss record, or exit the game. During battles, players will have numbered options for attacking, defending, using special attacks, and viewing their fighter stats. After a match ends, the program will return players to the main menu so they can continue playing without restarting the application.
  
---
## ⚠️ Potential Challenges  
  
**What do you think will be the hardest part this week?**   
→   I think the hardest part this week will be adding new combat features while making sure the existing systems continue working correctly. The special attack system will require me to manage energy, calculate additional damage, and make sure fighters cannot perform certain actions without enough energy. I also think connecting the improved combat menu to the Fighter and CombatSystem classes could be challenging. I want to make sure that each feature works correctly without making the code too complicated or difficult to maintain.
  
**What is your plan if you get stuck?**   
→   If I get stuck while developing my fighting game, I plan to break the problem down into smaller steps and work through each part individually. I will use Visual Studio's debugging tools to identify errors and test my code after making changes. I will also review my previous assignments, class materials, and programming examples to better understand concepts I am struggling with. If I still cannot solve the problem, I will ask my instructor or classmates for guidance. My goal is to understand how to fix problems instead of just finding a quick solution.
  
---
  
## 📈 Level Up Goal  
  
**What skill are you focusing on improving this week?**   
→   This week, I want to focus on improving my object-oriented programming skills, especially working with classes, methods, and organizing my code. As I expand my fighting game, I want to better understand how different classes communicate with each other and how to separate responsibilities between them. I also want to become more comfortable adding new features to existing classes without making the program harder to manage. Improving these skills will help me build more organized and efficient programs in the future.
  
**What will you do to improve it?**   
(e.g., tutorial, practice, debugging, office hours)   
→   To improve my object-oriented programming skills, I plan to practice by adding new features to my existing Fighter and CombatSystem classes and creating a MatchTracker class. I will review my previous Full Sail assignments and course materials to strengthen my understanding of classes, methods, and how objects interact. I will also use Visual Studio to test and debug each feature as I build it. By working on one feature at a time and reviewing my code regularly, I hope to become more confident in writing organized C++ programs.
  
---
## 🗓️ Task Breakdown (GitHub Issues Planning)  
  
List the tasks you plan to create as GitHub Issues:  
  
- **Issue #1: Implement Special Attack System** — Add an energy attribute to the Fighter class and create special attack functionality in the CombatSystem class.
    
- **Issue #2: Improve Combat Menu** — Update the combat menu with numbered options for attacking, defending, using special attacks, and viewing fighter stats.
    
- **Issue #3: Create MatchTracker Class** — Develop a new class that records player wins and losses and displays the player's overall record.
    
- **Issue #4: Test and Debug New Features** — Test the special attack system, improved combat menu, and win/loss tracking to identify and fix errors.
  
---
  
## 🔥 Final Check  
  
Before you start coding, ask yourself:  
  
- [x] Do I know what I’m building this week?   
- [x] Do I know where to start?   
- [x] Did I break my work into small tasks?   
  
If yes → start coding 🚀   
If no → refine your plan first   
  
---
## 😈 Final Thought  
  
> Plan it now… or debug it later.