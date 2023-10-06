#include <iostream>
#include<fstream>
#include "debug.h"
using namespace std;
int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "ERROR: Usage: ./debug.exe <inputfile>.in\n";
        return 1;
    }
    ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        cout << "Error opening " << argv[1] << endl;
        return 1;
    }
    cout << "hello world! This is a debug demo." << endl;

    vector<double> testVector;
    
    // init vector using input file
    double val;
    while (ifs >> val) {
        testVector.push_back(val);
    }

    char cstring[4] = "Max";
    searchMyVector(cstring, testVector);
    cout << "\ncorrect max: 8" << endl;
}