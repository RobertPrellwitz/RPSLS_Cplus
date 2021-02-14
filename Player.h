//
// Created by Robert Prellwitz on 1/10/21.
//
#include <iostream>
#include <string>
#ifndef RPSLS_CPLUS_PLAYER_H
#define RPSLS_CPLUS_PLAYER_H
using namespace std;
#pragma once
class Player {
public:
    string name;
    string choices[5] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};
    string gesture;
    string chooseGesture();
    int score = 0;

};

class Human: public Player{
public:
    string setName();
    string chooseGesture();
};

class Computer: public Player{
public:
    string setName();
    string chooseGesture();
};


#endif //RPSLS_CPLUS_PLAYER_H
