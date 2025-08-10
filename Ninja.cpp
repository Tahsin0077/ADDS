#include "Ninja.h"
using namespace std;

string Ninja::getName()  { return "Ninja"; }
bool Ninja::beats( Move* other) {
    string o = other->getName();
    return o == "Pirate" || o == "Monkey";
}
