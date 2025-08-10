#include "Computer.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

using namespace std;

Computer::Computer(string n) : name(n) {
    srand(time(0)); 
}

Move* Computer::makeMove() {
    return new Rock();
}