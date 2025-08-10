#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main() {
    Human p1("Player");
    Computer p2("Computer");
    Referee ref;

    Player* winner = ref.refGame(&p1, &p2);

    if (winner == nullptr) {
        cout << "Tie" << endl;
    } else {
        cout << winner->getName() << endl;
    }

    return 0;
}
