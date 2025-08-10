#include "Player.h"

Player::Player() : name() {}
Player::Player(string& n) : name(n) {}

string Player::getName() {
    return name;
}

Player::~Player() {}