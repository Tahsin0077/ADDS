#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::searchHelper(vector<int>& list, int low, int high, int num) {
    if (low > high) {
        return false;
    }

    int mid = (low + high) / 2;

    if (list[mid] == num) {
        return true;
    } else if (list[mid] > num) {
        return searchHelper(list, low, mid - 1, num);
    } else {
        return searchHelper(list, mid + 1, high, num);
    }
}

bool RecursiveBinarySearch::search(vector<int> list, int num) {
    return searchHelper(list, 0, list.size() - 1, num);
}
