#include "Ninja.h"
using namespace std;

string Ninja::getName() const { return "Ninja"; }
bool Ninja::beats(const Move* other) const {
    string o = other->getName();
    return o == "Pirate" || o == "Monkey";
}
