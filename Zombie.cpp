#include "Zombie.h"
using namespace std;

string Zombie::getName() const { return "Zombie"; }
bool Zombie::beats(const Move* other) const {
    string o = other->getName();
    return o == "Ninja" || o == "Rock";
}
