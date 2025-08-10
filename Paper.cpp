#include "Paper.h"
using namespace std;

string Paper::getName()  { return "Paper"; }
bool Paper::beats( Move* other)  {
    string o = other->getName();
    return o == "Rock" || o == "Robot" || o == "Zombie";
}