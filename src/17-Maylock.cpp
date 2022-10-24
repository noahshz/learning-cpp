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
#include <deque>
#include <iterator>
#include <memory>
#include <stdio.h>

using namespace std;

void awaitInput();

int main() {
    int amountToStore;
    cout << "How many numbers need to be stored?" << endl;
    cin >> amountToStore;

    // allocate memory
    int* pNums;
    pNums = (int*) malloc(amountToStore * sizeof(int));

    // fill pointer
    if(pNums != NULL) {
        int i = 0;
        while(i < amountToStore) {
            cout << "Enter Number: ";
            cin >> pNums[i];
            i++;
        }
    }
    // print out
    cout << "You entered these numbers: " << endl;
    for(unsigned int i = 0; i < amountToStore; i++) {
        cout << pNums[i] << endl;
    }   
    // delete pointer
    delete pNums;

    awaitInput();
}

void awaitInput() {
    string input;
    cin >> input;
}