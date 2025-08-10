#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer : public Player {
    string name;
public:
    Computer(string n);
    Move* makeMove() override;
    string getName() const override;
};

#endif
