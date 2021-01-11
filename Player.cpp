//
// Created by Robert Prellwitz on 1/10/21.
//
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

string Human::setName(){
    cout << "Please enter your Name and hit enter";
    cin >> name;
    return name;
}
string Computer::setName(){
    name = "Amd Ryzen 9";
    return name;
}