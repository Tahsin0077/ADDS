#include "Rock.h"
using namespace std;

string Rock::getName(){ return "Rock"; }
bool Rock::beats( Move* other)  {
    string o = other->getName();
    return o == "Scissors" || o == "Monkey";
}