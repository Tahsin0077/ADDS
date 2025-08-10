#include "Zombie.h"
using namespace std;

string Zombie::getName()  { return "Zombie"; }
bool Zombie::beats( Move* other)  {
    string o = other->getName();
    return o == "Ninja" || o == "Rock";
}