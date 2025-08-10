#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include <string>

class Pirate : public Move {
public:
    std::string getName();
    bool beats( Move* other);
};

#endif