#include "Referee.h"
using namespace std;

Player* Referee::refGame(Player* p1, Player* p2) {
    Move* m1 = p1->makeMove();
    Move* m2 = p2->makeMove();

    if (m1->beats(m2)) {
        delete m1; delete m2;
        return p1;
    } else if (m2->beats(m1)) {
        delete m1; delete m2;
        return p2;
    } else {
        delete m1; delete m2;
        return nullptr; 
    }
}
