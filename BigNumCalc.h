#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include "Node.h"

#include <list>
#include <string>
using namespace std;

class BigNumCalc {
private:
public:
    BigNumCalc();
    list<int> buildBigNum(string numString);
    list<int> add(list<int> num1, list<int> num2);
    list<int> sub(list<int> num1, list<int> num2);
    list<int> mul(list<int> num1, list<int> num2);
    bool firstGreater(list<int> num1, list<int> num2);
    void clean(list<int>& num1);
    ~BigNumCalc();
};

#endif
