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
    void playerType(Player player1);
    void runGame();
    Player PlayerTypeII(Player player1);
};


#endif //RPSLS_CPLUS_GAME_H
