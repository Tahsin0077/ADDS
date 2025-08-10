#include "Monkey.h"
using namespace std;

string Monkey::getName() const { return "Monkey"; }
bool Monkey::beats(const Move* other) const {
    string o = other->getName();
    return o == "Paper" || o == "Robot";
}