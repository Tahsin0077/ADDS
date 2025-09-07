#include "Sort.h"
#include "QuickSort.h"

void QuickSort::quickSortHelper(vector<int>& list, int low, int high) {
    if (low < high) {
        int pivot = list[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (list[j] <= pivot) {
                i++;
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }

        int temp = list[i + 1];
        list[i + 1] = list[high];
        list[high] = temp;

        int pivotIndex = i + 1;

        quickSortHelper(list, low, pivotIndex - 1);
        quickSortHelper(list, pivotIndex + 1, high);
    }
}

vector<int> QuickSort::sort(vector<int> list) {
    if (list.size() <= 1) {
        return list;
    }
    quickSortHelper(list, 0, list.size() - 1);
    return list;
}
