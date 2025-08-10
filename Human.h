#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"

class Human : public Player {
    string name;
public:
    Human(string n);
    Move* makeMove() override;
    string getName() const override;
};

#endif
