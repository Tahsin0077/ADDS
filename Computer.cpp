#include "Computer.h"
#include <iostream>

using namespace std;

Computer::Computer() : Player("Computer") {}

char Computer::makeMove() {
    return 'R';
}