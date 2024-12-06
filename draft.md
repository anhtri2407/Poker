***Include the cover paper here***
***Include the table of contents here***

# 1. FOREWORD

We want to say thanks to mrs Tran Thi Thao Nhi and mrs Phan Thi Phuong Uyen to provide us with the opportunity to work on this project. We also want to say thanks for your guidance and support throughout the project. We are grateful for the time and effort you have put into this project. We hope that you will be satisfied with the result of our work.

Although there are still some limitations in the project, like one of our team members is not able to contribute to the project due to his personal reasons, we still try our best to complete the project as best as we can. We hope that you will understand our situation and effort we've put into this project.

We hope that you will enjoy the project and find it match your expectation. We are looking forward to receiving your feedback and comments on the project. We hope that you will have a great time with the project.

We consider ourselves very lucky that this opportunity for the project was given to us and allowed us to learn by experience. Any limitations or shortcomings in this work are entirely our responsibility. We hope that this project will be a stepping stone for us to improve our skills and knowledge in the future.

Thank you for your time and consideration. After all, we hope that you will be satisfied with the project and we hope that we will have the opportunity to work with you again in the future.

Best regards,

# 2. INTRODUCTION

The project is about developing a Poker game using C++ programming language. The project is developed by a team of 2 members (formerly 3 members) including Le Nguyen Anh Tri and Lam Chi Hao. The project is developed as a part of the final project for the course "Fundamentals of Programming" at the University of Science - Vietnam National University, Ho Chi Minh City.

***Include the group information table here***

So as a team of 2 memebers, we don't have to really deal with the group management and communication at all, we can just use Messenger and GitHub for collaboration information and communication. So that we don't have any work management board or communication plan. The plan is simplified into just one person doing the core game logic and the other person doing the graphical user interface. After that there will be some session for reviewing, testing and merging the code.

***Include the table of contribution***

This project is divided into 3 main parts: the first part is about the rules of the Poker game, the second part is about the implementation of the Poker game, and the third part is about the testing of the Poker game. The project is developed using C++ programming language and the Visual Studio Code IDE. We will try to cover all the aspects of the project in this report.

***Include the picture of VSCode and C++ here***

Additionally, we will also use SDL2 library to develop the graphical user interface for the Poker game. The graphical user interface will help the players to interact with the game more easily and conveniently. The graphical user interface will also help the players to understand the game better and enjoy the game more. We also want to go somewhat beyond the requirements of the project to make the project more interesting and challenging.

***Include the picture of SDL2 library here***

This project is developed with the aim of helping students understand the how to develop a simple game or application in near future. The project is also developed with the aim of helping students understand the basic concepts of programming and how to apply them in real-life projects.

***Include the link to our src code here***

## 2.1. ABOUT THE POKER GAME

### 2.1.1. Poker Hand Rankings

All poker hands are formed from five cards, although the cards may come from different sets of cards, as long as the total is five. The following are the poker hand rankings from highest to lowest:
1. **Royal Flush**: A, K, Q, J, 10, all the same suit. (We are not implementing this in our project since it's too rare to happen and the project requirements are not including this as well)
***Include the picture of royal flush here***
2. **Straight Flush**: Five cards in a sequence, all in the same suit. Such as 9, 8, 7, 6, 5, all in hearts.
***Include the picture of straight flush here***
3. **Four of a Kind**: All four cards of the same rank. Such as 4 Aces.
***Include the picture of four of a kind here***
4. **Full House**: Three of a kind with a pair. Such as 3 Kings and 2 4s.
***Include the picture of full house here***
5. **Flush**: Any five cards of the same suit, but not in a sequence. Such as 2, 4, 6, 9, K, all in diamonds.
***Include the picture of flush here***
6. **Straight**: Five cards in a sequence, but not of the same suit. Such as 10 of hearts, J of spades, Q of diamonds, K of clubs, A of hearts.
***Include the picture of straight here***
7. **Three of a Kind**: Three cards of the same rank. Such as 3 Queens.
***Include the picture of three of a kind here***
8. **Two Pair**: Two different pairs. Such as 2 Aces and 2 8s.
***Include the picture of two pair here***
9. **One Pair**: Two cards of the same rank. Such as 2 5s.
***Include the picture of one pair here***
10. **High Card**: When you haven't made any of the hands above, the highest card plays. Such as K, 10, 8, 6, 4, which is a King high high card.
***Include the picture of high card here***

So there are 10 different hands in total. The highest hand is the Royal Flush and the lowest hand is the High Card. But we only implement the hands from Straight Flush to High Card in our project.

### 2.1.2. Poker Game Variants
Based on that information, there are a lot of Poker game variants. Some of the most popular Poker game variants are:
1. **Texas Hold'em**: Each player is dealt two private cards and there are five community cards on the table. Players have to make the best possible five-card hand using any combination of the seven cards.
2. **Draw Poker**: Players are dealt five, and then can choose to discard and replace some of them (normally 1 to 3 cards at a time). After that, the best hand wins.
    - Round 1: Each player is dealt 5 cards. Then they decide if they want to follow the game or not via the "raise", "call" or "fold" actions.
    - Round 2: At this round, players can discard and replace from one to three of their cards once (there is also another variants where if players have aces they can discard fours of their cards and draw four new cards).
    - Round 3: Players decide if they want to follow the game or not via the "raise", "call" or "fold" actions.
    - Round 4: Players now show their cards and the best hand wins.
3. **Stud Poker**: Players are dealt a mix of face-down and face-up cards, and the best five-card hand wins.
4. **Simplified Poker**: This is one variants of Poker game that are included in the project requirements. The rules of the Simplified Poker game are as follows:
    - The game is played with a standard deck of 52 cards.
    - The game is played with 2 to 10 players
    - Each player is dealt 5 cards.
    - The player with the highest hand wins the game.
    - If two players have the same hand, the player with the highest card wins.
    - If two players have the same hand and the same highest card, the game is a draw.

In this project, we will implement the Simplified Poker game and the Draw Poker variants. Since we notice that the Simplified Poker game is too simple and boring, and it only meets the basic requirements of the project, we decide to implement the Draw Poker as we notice it steps on what we've implemented in the Simplified Poker game. So that we can achive some of the advanced requirements of the project.

## 2.2. IMPLEMENTATION OF THE POKER GAME

<!-- SAYING THAT WE DON'T DEVELOP SEPERATED CODE FOR DIFFERENT GAMEMODE, WE USE CLASS, THEN STEP ON THAT TO BUILD MORE GAME MODE. -->
We don't divided our project into invividual parts for each game mode, instead we just implement all the game modes in one single project. We building it using the class features in C++ version 11. So that after having the method we need, we can modify that to implement more game mode in the future. 

### 2.2.1. Class Design

<!-- SAYING WHAT WE USE TO IMPLEMENT THIS PROJECT. -->
The Poker game is implemented using C++ programming language, SDL2 library and the Visual Studio Code IDE. We decide to use `class` features in C++ version 11 to implement the Poker game. Although class may seem like out of the scope for the project requirements, we still decide to use it since it's a good practice for the future projects, and we will just use it as the way we use `struct` in C version 99. There are 

<!-- INTRODUCING THE CLASS AND ITS PURPOSES. -->
1. **Card class**: This class is used to represent a card in the Poker game. The class has the following attributes:
    - `enum Ranks`: This enum is used to represent the rank of the card. The ranks are from 2 to 14 (2 to 10, Jack, Queen, King, Ace). For handling Draw Poker, we decide to add one more rank which is `-1` to represent the card is discarded.
    - `enum Suits`: This enum is used to represent the suit of the card. The suits are Spades, Hearts, Diamonds, Clubs. For handling Draw Poker, we decide to add one more suit which is `-1` to represent the card is discarded.
2. **Deck class**: This class is used to represent a deck of cards in the Poker game. This class is build up from the Card class. The class has the following attributes:
    - `Card cards[52]`: An array of 52 cards to represent the deck of cards.
    - We also have some constants to represent the number of cards in the deck, the number of suits and the number of ranks.
    - We also keep track of the number of remaining cards in the deck.
    - There are also some functions to handle Deck operations such as shuffling the deck, setting 52 cards into the deck, etc. This will be covered more in the implementation section.
3. **Hand class**: This class is used to represent a hand of cards in the Poker game. This class is build up from the Card class. The class has the following attributes:
    - `Card cards[5]`: An array of 5 cards to represent the hand of cards.
    - `Card sortedCard[5]`: This array is used for evaluating the hand of cards. The cards are sorted in descending order of rank.
    - `bool removedCard[5]`: This array is used for marking the cards that the players want to be removed from their hand.
    - We also have some variables to keep track of the strength of the hand, the number of cards in the hand, etc.
    - We also have some methods to handle Hand operations such as evaluating the hand, sorting the hand, etc. This will be covered more in the implementation section.
4. **Storage class**: This is a helper class to store the information of the game such as the players' usernames, their password (after hashing), their number of played games, etc.
    - In this class we develop a `stuct` that contains attributes related to the player such as `username`, `password`, `number of played games`, etc.
    - We also have some methods to handle Storage operations such as reading the information from the file, writing the information to the file, etc. This will be covered more in the implementation section.
5. **Leaderboard class**: This is also a helper class to store the information of the game such as the players' usernames, their number of played games, their number of won games, etc.
    - In this class we develop a `stuct` that contains attributes related to the player such as `username`, `number of played games`, `number of won games`, etc.
    - We also have some methods to handle Leaderboard operations such as reading the information from the file, writing the information to the file, etc. This will be covered more in the implementation section.
6. **Login class**: This class is used to represent a login information in the Poker game. This class is build up from the Storage class. The class has the following attributes:
    - `enum StatusCode`: For handling which status the login is in such as `OK`, `INCORRECT_PASSWORD` or `NEW_ACCOUNT`.
    - `Storage storage`: A storage information to represent the player's information.
    - We also have some variables to keep track of the player's username, the player's password, etc.
    - We also have some methods to handle Login operations such as registering, logging in, logging out, etc. This will be covered more in the implementation section.
7. **Player class**: Here come our real `Player` object. This class is used to represent a player in the Poker game. This class is build up from the Hand class and Login class. The class has the following attributes:
    - `Hand hand`: A hand of cards to represent the player's hand.
    - `Login login`: A login information to represent the player's login information.
    - We also have some variables to keep track of the player's username, the player's password, etc.
    - We also have some methods to handle Player operations such as logging in, logging out, etc. This will be covered more in the implementation section.
8. **Gameplay class**: This class is used to represent the gameplay in the Poker game. This class is build up from the Player class, Storage class and Deck class. The class has the following attributes:
    - `vector <Player> players`: A vector of players to represent the players in the game.
    - We also handle things like deadling cards, saving players' information, reseting deck and drawing card for players, etc. This will be covered more in the implementation section.
9. **GameEngine class**: This class is different from the other classes. This class is used to represent the game engine in the Poker game. This class is build up SDL2. The class has the following attributes:
    - `Gameplay gameplay`: A gameplay to represent the gameplay in the game.
    - We also have some variables to keep track of the game's status, the game's mode, etc.
    - We also have some methods to handle GameEngine operations such as starting the game, saving the game, loading the game, etc. This will be covered more in the implementation section.

### 2.2.2. Class Diagram

After having the class design, we can build the class diagram for the Poker game. The class diagram will help us to understand the relationships between the classes and how the classes interact with each other. The class diagram will also help us to understand the structure of the Poker game and how the Poker game works. Once again, using class for this project is just for the purpose of practicing and getting used to it, we will just use it as the way we use `struct` in C version 99.

For representing the class diagram, we will use the mermaid syntax, which is a simple and easy-to-use syntax for generating diagrams. The class diagram will be generated using the mermaid syntax and will be included in the report.

***Include the class diagram here***


# 3. IMPLEMENTATION

## 3.1. Included Libraries

For this project to work, we need to include some libraries, step on that to build the project. The libraries we need to include are these following:
1. **iostream**: In this project, we use `iostream` to handle most of our debug statements on the console while running and developing the project.
2. **string**: In this project, we use `string` to handle the player's username and password for implementing the login, string is also used for rendering the text on the screen.
3. **vector**: In this project, we use `vector` to handle the some of the data structures such as the players in the game, the cards in the deck, etc.
4. **random**: In this project, we use `random` to handle the random number generation for shuffling the deck of cards.
5. **algorithm**: In this project, we use `algorithm` to handle the sorting of the cards in the hand of cards.
6. **fstream**: In this project, especially in the Storage class, we use `fstream` to handle the reading and writing of the players' information to the file.
7. **map**: Especially, in the Storage class, we use `map` to handle the hashing of the players' password.
8. **ctime**: In this project, we use `ctime` to handle the random seed for shuffling the deck of cards.
9. **sstream**: In this project, we use `sstream` to handle the parsing of the players' information from the file.
10. **funcional**: In this project, we use `functional` to handle the sorting of the cards in the hand of cards.
11. **SDL2/SDL.h**: In this project, we use `SDL2/SDL.h` to handle the graphical user interface for the Poker game.
12. **SDL2/SDL_ttf.h**: In this project, we use `SDL2/SDL_ttf.h` to handle the rendering of the text on the screen.
13. **SDL2/SDL_image.h**: In this project, we use `SDL2/SDL_image.h` to handle the rendering of the images on the screen.
14. **SDL2/SDL_mixer.h**: In this project, we use `SDL2/SDL_mixer.h` to handle the sound effects in the Poker game.

Notice that, we don't include the `SDL2/SDL.h` library in the `Game Core` part since it's not really necessary for the core game logic. We only include it in the `Game Engine` part since it's necessary for the graphical user interface.

## 3.2. Precompiled Headers

In order to speed up the compilation process, we decide to use precompiled headers in our project. Precompiled headers are a feature of the C++ programming language that allows the compiler to compile some parts of the code only once and then reuse them in other parts of the code. This can help to reduce the compilation time and speed up the development process.

To implement that, we create a file called `pch.h` and include all the necessary libraries in that file, especially heavy-weighted libraries such as SDL2 libraries. Then we include the `pch.h` file in all the other source files in the project. This will help to speed up the compilation process and make the development process more efficient.

Also in that precompiled header file, we define lots of our (constexpr) constants that are used to determined the path to our game assets or those button positions, etc. This will help us to easily change the game assets or the button positions in the future.

## 3.3. CMake

To utilize the precompiled headers in our project, we decide to use CMake to build the project. CMake is a cross-platform build system that allows us to build, test, and package software. CMake is a powerful tool that can help us to manage the build process and make the development process more efficient.

For easy understand, CMake just like a tool to automate the build process via the command line. It will help us to compile the project, link the libraries, and generate the executable file. We just need to write the CMakeLists.txt file and run the cmake command to build the project.

To implement that we create a file called `Makefile`, which is a simple text file that contains a list of commands to be executed by the make command. The make command is used to compile the project, link the libraries, and generate the executable file.

Notice that we've just implemented the CMake for Windows and MacOS, some of the Unix-based OS like Linux may not work with our CMake file. Since we don't have the Linux OS to test the CMake file, we can't guarantee that it will work on Linux OS.

To run the CMake file, we need to follow these steps:
1. Open the terminal.
2. Navigate to the project root directory.
3. Run the following command to generate the build files:
```bash
make all
make run
make clean
```
On Windows, we can use the following commands to build the project:
```bash
mingw32-make -f Makefile all
mingw32-make -f Makefile run
mingw32-make -f Makefile clean
```

That's it, we can now build the project using CMake and run the executable file to play the Poker game.

## 3.4. Naming Convention

Before we start implementing the project, we need to define the naming convention for the project. The naming convention is a set of rules that govern the naming of variables, functions, classes, etc. in the project. The naming convention is important because it helps to make the code more readable and maintainable.

In this project, we decide to use the following naming convention:

***Already write this***

## 3.4. Game Core

### 3.4.1. Card Class

This is the most basic object in our project. We define two enumerations `Ranks` and `Suits` to represent the rank and suit of the card. 

There is also two function in this scope which are `suitToString` and `rankToString`. Which is just the function for the early state of the project where we need to print the card to the console, and actually running the game on console. After moving to the graphical user interface, these functions now serve as the debug functions.

***Include pseudocode***

### 3.4.2. Deck Class

### 3.4.3. Hand Class

### 3.4.4. Storage Class

### 3.4.5. Leaderboard Class

### 3.4.6. Login Class

### 3.4.7. Player Class

### 3.4.8. Gameplay Class

## 3.5. Game Engine

### 3.5.1. GameEngine Class

### 3.5.2. Basic Game Loop

### 3.5.2. Each of the Game Screen

## 3.6. main.cpp

# 4. PROGRAM FLOW

## 4.1. Main Menu

This is the screen where the player can choose to start a PvP or PvE game, view the leaderboard, or exit the game. The player can use the mouse to click on the buttons to navigate through the menu.

# 5. TESTING

# 6. CONCLUSION

After all, we hope that you will enjoy the project and find it match your expectation. We are looking forward to receiving your feedback and comments on the project. We hope that you will have a great time with the project.

There are also some limitations in the project that we want to address.
1. First of all, the project is developed using SDL2 library for the graphical user interface. The SDL2 library is a powerful library that can help to create complex graphical user interfaces. However, the SDL2 library is quite complex and difficult to learn. We have to spend a lot of time to learn how to use the SDL2 library and how to create the graphical user interface for the Poker game. We hope that you will understand our situation and effort we've put into this project.

2. Secondly, the project only testing on Windows and MacOS, some of the Unix-based OS like Linux may not work with our CMake file. Since we don't have the Linux OS to test the CMake file, we can't guarantee that it will work on Linux OS. We hope that you will understand our situation and effort we've put into this project.

3. Thirdly, we built up the essential class and method for the project, but we don't have enough time to implement more Poker game variants. We hope that you will understand our situation and effort we've put into this project.

# 7. REFERENCES
