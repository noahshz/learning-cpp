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

    // create ptr
    unique_ptr<int[]> pNums(new int[amountToStore]);

    // fill
    if(pNums != NULL) {
        int i = 0;
        while(i < amountToStore) {
            cout << "Enter Number: ";
            cin >> pNums[i];
            i++;
        }
    }

    // print out
    cout << "You entered following nums: " << endl;
    for(int i = 0; i < amountToStore; i++) {
        cout << pNums[i] << endl;
    }

    awaitInput();
}

void awaitInput() {
    string input;
    cin >> input;
}