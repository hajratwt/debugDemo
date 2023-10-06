#include "fun.h"
double foo (int a) {
    int b = -1;
    a = 2 + b*b + 3;
    return a / 3.0;
}

int findMax(std::vector<double> &v) {
    int currMax = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i > currMax) {
            currMax = i;
        }
    }
    return currMax;
}