#include "Pirate.h"
using namespace std;

string Pirate::getName()  { return "Pirate"; }
bool Pirate::beats(Move* other) {
    string o = other->getName();
    return o == "Robot" || o == "Monkey";
}
