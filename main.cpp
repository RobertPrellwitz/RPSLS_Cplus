#include <iostream>
#include "Game.h"
#include "Player.h"
using namespace std;
int main() {
    cout << "Welcome to the classic variation of Rshambo as popularized by Sheldon of the Big Bang Theory!"
            "\nRock, Paper, Scissors, Lizard, Spock!" << endl ;
    cout << "Game plays is as follows: " << endl << "\n Scissors Cuts Paper \nPaper Cover Rock \nRock crushes Lizard"
                                                    "\nLizard Poisons Spock \nSpock smashes Scissors \n"
                                                    "Scissors decapitates Lizard \nLizard eats Paper \nPaper disproves Spock"
                                                    "\nSpock vaporizes Rock\n(and as it always has!!...)\nRock crushes Scissors" << endl;
    Game newGame;
    newGame.runGame();

    return 0;
}
