#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"

class Monkey : public Move {
public:
    string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
