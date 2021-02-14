//
// Created by Robert Prellwitz on 1/10/21.
//
#include <iostream>
#include "Player.h"
#include "Game.h"
using namespace std;
Computer computer;
Human human;
Player player1;
Player player2;
string player1gesture;
string player2gesture;

void Game::runGame(){
    //Computer player2;
    Human player1;
    player1.setName();
    player2 = PlayerTypeII();

    cout << player1.name << " vs "  << player2.name;
    int length = gameLength();
    player1gesture = player1.chooseGesture();
//    player2gesture = player2.chooseGesture();
}

int Game::PlayerType(){
    cout << "Would you like to play against the computer or a friend?" << endl;
    cout << "Please enter a '1' for single player mode or '2' for two player mode" << endl;
    int playerType;
    cin >> playerType;
    return playerType;
}

//void player1Turn(){
//    player1gesture = player1.chooseGesture();
//}
//void player2Turn(){
//    player2gesture = player2.chooseGesture();
//}
//void GameType(int choice){
//    switch(choice){
//        case 1:
//            Computer computer1;
//            break;
//        case 2:
//            Human human1;
//            break;
//        default:
//            cout << "not a valid selection";
//            break:
//    }
//}

Player Game::PlayerTypeII(){
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
        return PlayerTypeII();
    }
}
int Game::gameLength() {
    // this needs better error handling
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
Computer Game::player2Comp(){
    Computer player2;
    return player2;
}
Human Game::player2Hum(){
    Human player2;
    return player2;
}

//string Game::player1Turn(player1){
//    player1play = player1.chooseGesture();
//    return player1Play;
//}
