#ifndef QUICKSORT_H
#define QUICKSORT_H

#include"Sort.h"

class QuickSort : public Sort{
    public:
       void quickSortHelper(vector<int>& list, int low, int high);
       vector<int> sort(vector<int> list);
};

#endif