#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(string name) : Player(name) {}

char Human :: makeMove(){
    char move;
    cout << "Enter Move: ";
    cin >> move;
    return move;
}