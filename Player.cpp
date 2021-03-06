//
// Created by Robert Prellwitz on 1/10/21.
//
#include <cstdlib>
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

string Human::setName(){
    cout << "Please enter your Name and hit enter";
    cin >> name;
    return name;
}

string Human::chooseGesture(){
    string gesture;
    int choice;
    cout << "Please select your gesture choice for this round \n"
            "use the number next to the desired option to play.\n";
            for (int i = 0; i <= choices->length(); i++ ){
                cout << i <<": " << choices[i] << endl;
            }
            cin >> choice;
            gesture = choices[choice];
            cout << gesture;
            return gesture;
}
string Computer::chooseGesture(){
    srand((unsigned int) time(0));
    int randNum = rand() % 4;
    string gesture = choices[randNum];
    cout << gesture;
    return gesture;
}

string Computer::setName() {
    name = "AMD Ryzen9";
    return name;
}