#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <string>
using namespace std;

class Human : public Player {
    public:
    Human(string name = "Human");
    char makeMove() override;
};

#endif