#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include <string>

class Zombie : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
