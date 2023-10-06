#include "fun.h"

int findMax(std::vector<double> &v) {
    int currMax = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i > currMax) {
            currMax = i;
        }
    }
    return currMax;
}