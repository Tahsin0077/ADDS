#ifndef NINJA_H
#define NINJA_H
#include "Move.h"
#include <string>

class Ninja : public Move {
public:
    std::string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
