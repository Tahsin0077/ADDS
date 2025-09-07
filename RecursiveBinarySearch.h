#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include <vector>
using namespace std;

class RecursiveBinarySearch {
public:
    bool searchHelper(vector<int>& list, int low, int high, int num);
    bool search(vector<int> list, int num);
};

#endif