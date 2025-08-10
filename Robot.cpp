#include "Robot.h"
using namespace std;

string Robot::getName()  { return "Robot"; }
bool Robot::beats( Move* other) {
    string o = other->getName();
    return o == "Scissors" || o == "Ninja";
}