#include "Monkey.h"
using namespace std;

string Monkey::getName()  { return "Monkey"; }
bool Monkey::beats( Move* other) {
    string o = other->getName();
    return o == "Paper" || o == "Robot";
}