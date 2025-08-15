#include <iostream>
#include <string>
#include <algorithm>
#include "Reverser.h"
#include <cmath>

using namespace std;

string Reverser :: reverseString(string& s) {
    if (s.empty()) {
        return "ERROR";
    } else {
        reverse(s.begin(), s.end());
        return s;
    }
}

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    } else if (value == 0) {
        return 0;
    } else {
        int reversed = 0;
        while (value != 0) {
            reversed = reversed * 10 + value % 10;
            value /= 10;
        }
        return reversed;
    }
}