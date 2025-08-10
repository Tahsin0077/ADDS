#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

class Move;

class Human : public Player {
public:
    Human();
    Human(std::string n);
    Move* makeMove();
};

#endif