#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>

class Move;

class Human : public Player {
    std::string name;
public:
    Human() : name("Human") {}
    Human(std::string n);
    Move* makeMove();
};

#endif