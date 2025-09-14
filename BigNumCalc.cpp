#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {
}

list<int> BigNumCalc::buildBigNum(string numString) {
    list<int> result;
    for (char c : numString) {
        result.push_back(c - '0');
    }
    return result;
}

list<int> BigNumCalc::add(list<int> num1, list<int> num2) {
    list<int> result;
    int carry = 0;
    while (!num1.empty() || !num2.empty() || carry != 0) {
        int d1 = 0, d2 = 0;
        if (!num1.empty()) {
            d1 = num1.back();
            num1.pop_back();
        }
        if (!num2.empty()) {
            d2 = num2.back();
            num2.pop_back();
        }
        int s = d1 + d2 + carry;
        carry = s / 10;
        result.push_front(s % 10);
    }
    return result;
}

list<int> BigNumCalc::sub(list<int> num1, list<int> num2) {
    list<int> result;
    list<int> bigger, smaller;
    bool borrow = false;
    int d1, d2;
    bool fg = firstGreater(num1, num2);
    if (fg) {
        bigger = num1;
        smaller = num2;
    } else {
        bigger = num2;
        smaller = num1;
    }
    while (!bigger.empty() || !smaller.empty()) {
        d1 = bigger.back();
        if (borrow) {
            d1--;
            borrow = false;
        }
        if (!smaller.empty()) {
            d2 = smaller.back();
            smaller.pop_back();
        } else {
            d2 = 0;
        }
        if (d1 < d2) {
            d1 += 10;
            borrow = true;
        }
        result.push_front(d1 - d2);
        bigger.pop_back();
    }
    clean(result);
    if (fg) return result;
    int neg = result.front() * -1;
    result.pop_front();
    result.push_front(neg);
    return result;
}

list<int> BigNumCalc::mul(list<int> num1, list<int> num2) {
    list<int> result;
    int carry = 0;
    int digit = num2.back();
    while (!num1.empty()) {
        int prod = num1.back() * digit + carry;
        carry = prod / 10;
        result.push_front(prod % 10);
        num1.pop_back();
    }
    if (carry > 0) result.push_front(carry);
    return result;
}

void BigNumCalc::clean(list<int>& num1) {
    while (num1.size() > 1 && num1.front() == 0) {
        num1.pop_front();
    }
}

bool BigNumCalc::firstGreater(list<int> num1, list<int> num2) {
    if (num1.size() > num2.size()) return true;
    if (num2.size() > num1.size()) return false;
    while (!num1.empty()) {
        if (num1.front() > num2.front()) return true;
        if (num1.front() < num2.front()) return false;
        num1.pop_front();
        num2.pop_front();
    }
    return true;
}

BigNumCalc::~BigNumCalc() {
}
