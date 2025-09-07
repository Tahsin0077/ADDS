#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    vector<int> list;
    string input;
    getline(cin, input);

    istringstream iss(input);
    for (int x; iss >> x;) list.push_back(x);

    QuickSort quick;
    vector<int> sortedList = quick.sort(list);

    RecursiveBinarySearch rbs;
    cout << (rbs.search(sortedList, 1) ? "true " : "false ");

    for (int i : sortedList) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
