#include <iostream>
#include "Reverser.h"
#include "Truckloads.h"

using namespace std;

int main() {
    Reverser reverser;
    Truckloads truckloads;

    
    string testString = "Tahsin Hossain";
    cout << "Reversed string: " << reverser.reverseString(testString) << endl;

    string truckload = "Load 1";
    cout << "Reversed truckload: " << reverser.reverseString(truckload) << endl;

    int testNumber = 6251;
    cout << "Reversed number: " << reverser.reverseDigit(testNumber) << endl;

    return 0;
}