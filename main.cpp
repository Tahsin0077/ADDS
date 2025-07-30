#include "Referee.h"
#include <iostream>
using namespace std;

int main(){
    Human p1;
    Computer p2;
    Referee ref;

    Player * winner = ref.refGame(&p1, &p2);
    if(winner == nullptr){
        cout << "Tie" << endl;
    }else {
        cout << winner->getName() << endl;
    }
    return 0;

}