#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"

class Robot : public Move {
public:
    string getName() const override;
    bool beats(const Move* other) const override;
};

#endif
