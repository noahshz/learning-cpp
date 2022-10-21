#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include <limits>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;

void awaitInput();

int main() {
    int* intPtr;
    intPtr = new int;

    *intPtr = 48;

    cout << *intPtr << endl; 

    delete intPtr;

    awaitInput();
}

void awaitInput() {
    string input;
    cin >> input;
}