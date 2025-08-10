#include "Robot.h"
using namespace std;

string Robot::getName() const { return "Robot"; }
bool Robot::beats(const Move* other) const {
    string o = other->getName();
    return o == "Scissors" || o == "Ninja";
}