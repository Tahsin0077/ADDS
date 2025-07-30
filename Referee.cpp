#include <iostream>
#include "Referee.h"

using namespace std;

Referee :: Referee(){}

Player * Referee::refGame(Player * player1, Player * player2){
    char Player1move = player1->makeMove();
    char Player2move = player2->makeMove();

    if(Player1move == Player2move){
        return nullptr;
    }else if ((Player1move == 'P' && Player2move == 'R') || (Player1move == 'R' && Player2move == 'S') || (Player1move == 'S' && Player2move == 'P')){
        return player1;
    }else {
        return player2;
    }
};
