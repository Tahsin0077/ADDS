#include "Rock.h"
using namespace std;

string Rock::getName() const { return "Rock"; }
bool Rock::beats(const Move* other) const {
    string o = other->getName();
    return o == "Scissors" || o == "Monkey";
}