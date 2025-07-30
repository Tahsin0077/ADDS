#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player{
    protected:
        string name;
    public:
        Player(string name);
        virtual char makeMove() = 0;
        string getName();
        ~Player() {};
};

#endif