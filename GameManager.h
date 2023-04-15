#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>

using namespace std;

class GameManager {

    private:
        static unsigned int playerScore; //For tracking player score as game progresses.
        static bool gameOver; //For controlling when the game is over or not.
        static string playerName;

    public:

        //Getter Functions

        static int getScore() { return playerScore; }; //Returns the player score.

        static bool getGameOver() { return gameOver; }; //Returns whether the game is over.

        static string getName() { return playerName; }; //Returns the player name.

        //Setter Functions

        static void setScore( unsigned int score ) { playerScore = score; }; //Sets playerScore to unsigned int.

        static void setGameOver( bool over ) { gameOver = over; }; //Sets gameOver to bool.

        static void setName( string name ) { playerName = name; }; //Sets playerName to string.

        //Game Flow Functions

        static unsigned int Play(); //Starts gameplay loop.

        static void Turn( void );
};

#endif