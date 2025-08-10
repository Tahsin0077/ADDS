#ifndef MOVE_H
#define MOVE_H

#include <string>
using namespace std;

class Move {
public:
    virtual string getName() const = 0;
    virtual bool beats(const Move* other) const = 0;
    virtual ~Move() {}
};

#endif
