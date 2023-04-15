#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>

using namespace std;

class GameManager {

    private:
        unsigned int playerScore; //For tracking player score as game progresses.
        bool gameOver; //For controlling when the game is over or not.
        string playerName;

    public:
        GameManager() {
            playerScore = 0;
            gameOver = false;
            playerName = "Fisher";
        };

        GameManager(unsigned int pS = 0, bool gO = false, string pN = "Fisher") {
            playerScore = pS;
            gameOver = gO;
            playerName = pN;

        };

        //Getter Functions

        int getScore() { return playerScore; }; //Returns the player score.

        bool getGameOver() { return gameOver; }; //Returns whether the game is over.

        string getName() { return playerName; }; //Returns the player name.

        //Setter Functions

        void setScore(unsigned int score) { playerScore = score; }; //Sets playerScore to unsigned int.

        void setGameOver( bool over) { gameOver = over; }; //Sets gameOver to bool.

        void setName( string name) { playerName = name; }; //Sets playerName to string.
};

#endif