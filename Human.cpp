#include "Human.h"
#include <iostream>
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

using namespace std;

Human::Human(string n) : name(n) {}

Move* Human::makeMove() {
    string choice;
    cin >> choice;

    if (choice == "Rock") return new Rock();
    if (choice == "Paper") return new Paper();
    if (choice == "Scissors") return new Scissors();
    if (choice == "Monkey") return new Monkey();
    if (choice == "Robot") return new Robot();
    if (choice == "Pirate") return new Pirate();
    if (choice == "Ninja") return new Ninja();
    if (choice == "Zombie") return new Zombie();

    return nullptr; 
}