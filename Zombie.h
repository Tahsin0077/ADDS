#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"

class Zombie : public Move {
public:
    string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
