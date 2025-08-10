#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"
using namespace std;

class Player {
protected:
    string name;
public:
    Player() : name() {}
    Player(const string& n) : name(n) {}
    virtual Move* makeMove() = 0;
    virtual string getName() const { return name; }
    virtual ~Player() {}
};

#endif
