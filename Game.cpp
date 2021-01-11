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
    auto length = gameLength();
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
        cout << player2.name << " which will destroy your puny human brain!" << endl;
        return player2;
    }
    else if(playertype == 2) {
        cout << "You will be playing against your friend" << endl;
        Human player2;
        player2.setName();
        cout << "Good Luck to you " << player1.name << " & " << player2.name << " may the odds be ever in your favour!" << endl;
        return player2;
    }
    else{
        cout << "That was not a valid selection.";
    }
}
int Game::gameLength() {
    int length;
    cout << "The game is generally best of three, however you can choose any option you\n"
            "would like. For example best of 7 would require a player to win 4 rounds.  Please input any \n"
            "integer 3 or greater in order to customize your game.";
    cin >> length;
    bool valid = false;
    while (valid != true) {
        if (length >= 3) {
            valid = true;
        } else {
            cout << "\n\nThat is not a valid selection - Enter and integer that is 3 or greater";
            cin >> length;
            //gameLength();
        }
    }
    return length;
}
