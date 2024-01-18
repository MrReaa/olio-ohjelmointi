#ifndef game_H
#define game_H

#include <iostream>
using namespace std;

class Game{

public:
    Game(int x){
        maxNumber = x;
        cout << "GAME CONSTRUCTOR: object initalized with "<<maxNumber<<" as a maximum value\n";
    }

    ~Game(){
        cout << "GAME DESTRUCTOR: object cleared from stock memory\n";
    }

    void play(){

        srand(time(NULL));
        randomNumber = rand() % maxNumber;
        if(randomNumber == 0){
            randomNumber = maxNumber;
        }

        bool running = true;

        while(running == true){
            numOfGuesses = numOfGuesses + 1;

            cout << "Give your quess between 1-"<<maxNumber<<"\n";
            cin >> playerGuess;

            if(randomNumber == playerGuess){
                cout << "Your quess is right = "<<playerGuess<<"\n";
                running = false;
            }
            else if(randomNumber<playerGuess){
                cout << "Your quess is too big\n";
            }
            else if(randomNumber>playerGuess){
                cout << "Your quess is too small\n";
            }

        }

        printGameResult();

        return;
    }

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult(){
        cout << "You quessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" quesses\n";

    }
};
#endif // game_H
