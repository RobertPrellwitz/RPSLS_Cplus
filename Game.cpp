//
// Created by Robert Prellwitz on 1/10/21.
//
#include <iostream>
#include "Player.h"
#include "Game.h"
using namespace std;
Player player;
//Human human;
//Computer computer;

void Game::runGame(){
    Human player1;
    player1.setName();
    PlayerTypeII(player1);
}

void Game::playerType(Player player1){
    cout << "Would you like to play against the computer or a friend?" << endl;
    cout << "Please enter a '1' for single player mode or '2' for two player mode" << endl;
    int playertype;
    cin >> playertype;
    switch (playertype){
        case 1:
            cout << player1.name << " welcome, you will be playing against the computer";
            //Computer player2;
            //player2.setName();
            //cout << player2.name << "Will destroy your puny human brain!";
            break;
        case 2:
            cout << "You will be playing against your friend";
            //Human player2;
            //player2.setName();
            break;
        default:
            cout << "That was not a valid selection.  Try again.";
            //playerType(Player player1);
    }
}

Player Game::PlayerTypeII(Player player1){
    cout << "Would you like to play against the computer or a friend?" << endl;
    cout << "Please enter a '1' for single player mode or '2' for two player mode" << endl;
    int playertype;
    cin >> playertype;
    if (playertype == 1){
        cout << player1.name << " welcome, you will be playing against the computer, ";
        Computer player2;
        player2.setName();
        cout << player2.name << " which will destroy your puny human brain!";
        return player2;
    }
    else if(playertype == 2) {
        cout << "You will be playing against your friend" << endl;
        Human player2;
        player2.setName();
        cout << "Good Luck to you " << player1.name << " & " << player2.name << " may the odds be ever in your favour!";
        return player2;
    }
    else{
        cout << "That was not a valid selection.";
    }
}