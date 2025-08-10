#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

#include "Move.h"

class Computer : public Player {
    std::string name;
public:
    Computer() : name("") {}
    Computer(std::string n);
    Move* makeMove();
};

#endif