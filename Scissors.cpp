#include "Scissors.h"
using namespace std;

string Scissors::getName()  { return "Scissors"; }
bool Scissors::beats( Move* other)  {
    string o = other->getName();
    return o == "Paper" || o == "Pirate" || o == "Zombie";
}