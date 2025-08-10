#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Move.h"
using namespace std;

class Player {
protected:
    string name;
public:
    virtual Move* makeMove() = 0;
    string getName() ;
    virtual ~Player();
};

#endif