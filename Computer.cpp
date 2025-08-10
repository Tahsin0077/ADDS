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
    srand(time(0)); // Consider moving this to main()
}

Move* Computer::makeMove() {
    int r = rand() % 8;
    switch (r) {
        case 0: return new Rock();
        case 1: return new Paper();
        case 2: return new Scissors();
        case 3: return new Monkey();
        case 4: return new Robot();
        case 5: return new Pirate();
        case 6: return new Ninja();
        case 7: return new Zombie();
    }
    return nullptr;
}

string Computer::getName() const {
    return name;
}