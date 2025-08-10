#include "Pirate.h"
using namespace std;

string Pirate::getName() const { return "Pirate"; }
bool Pirate::beats(const Move* other) const {
    string o = other->getName();
    return o == "Robot" || o == "Monkey";
}
