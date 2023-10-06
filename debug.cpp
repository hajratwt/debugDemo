#include "debug.h"

using namespace std;

// If specifier is Max, returns "max : value"... etc
void searchMyVector(char* specifier, vector<double> &v) {
    char toReturn[3];
    if (strcmp(specifier, "Max")) {
        strcpy (specifier, "Max =   ");
        int max = findMax(v);
        specifier[5] = max;
        strcpy(toReturn, specifier);
    }
    else  {
        cout << "ERROR: Usage. Only Max is implemented at this time!\n";

    cout << toReturn;
}