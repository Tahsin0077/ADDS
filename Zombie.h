#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include <string>

class Zombie : public Move {
public:
    std::string getName();
    bool beats( Move* other);
};

#endif
