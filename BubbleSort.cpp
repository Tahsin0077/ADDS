#include "Sort.h"
#include "BubbleSort.h"

vector<int> BubbleSort::sort(vector<int> list)
{
    int temp;
    for (int i = 0; i < list.size(); i++)
    {
        for (int j = 0; j < list.size() - 1 - i; j++)
        {
            if (list[j] > list[j + 1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    return list;
}
