//
// Created by Robert Prellwitz on 1/10/21.
//
#include <string>
#ifndef RPSLS_CPLUS_PLAYER_H
#define RPSLS_CPLUS_PLAYER_H
using namespace std;

class Player {
public:
    string name;
    string choices[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    string gesture;
    int score = 0;
};

class Human: public Player{

};

class Computer: public Player{

};


#endif //RPSLS_CPLUS_PLAYER_H
