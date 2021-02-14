//
// Created by Robert Prellwitz on 1/10/21.
//
#include <iostream>
#include "Player.h"

#ifndef RPSLS_CPLUS_GAME_H
#define RPSLS_CPLUS_GAME_H

#pragma once
class Game {
public:
    string player1gesture;
    string player2gesture;
    int PlayerType();
    void runGame();

    Player PlayerTypeII();
    int gameLength();
    string player1Turn();
    void player2Turn();

    Computer player2Comp();

    Human player2Hum();
};


#endif //RPSLS_CPLUS_GAME_H
