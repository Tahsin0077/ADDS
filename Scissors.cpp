#include "Scissors.h"
using namespace std;

string Scissors::getName() const { return "Scissors"; }
bool Scissors::beats(const Move* other) const {
    string o = other->getName();
    return o == "Paper" || o == "Pirate" || o == "Zombie";
}