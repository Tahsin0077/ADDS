#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"

class Pirate : public Move {
public:
    string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
