#include "Paper.h"
using namespace std;

string Paper::getName() const { return "Paper"; }
bool Paper::beats(const Move* other) const {
    string o = other->getName();
    return o == "Rock" || o == "Robot" || o == "Zombie";
}
