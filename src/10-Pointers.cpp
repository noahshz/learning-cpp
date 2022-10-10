#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <limits>

using namespace std;

// Prototypes
void changeValue(int* pVar);
void doubleArray(int* arr, int size);

int main() {
    // Change Value of pointer
    int oldage = 21;
    changeValue(&oldage);
    cout << oldage << endl;

    // Get Adress + Value
    int num = 18;
    int* pNum = NULL;
    pNum = &num;
    cout << "Address: " << pNum << endl;
    cout << "Value: " << *pNum << endl;

    // Arrays & Pointers
    int arr[] = {1, 2, 3, 4};
    int* pArr = arr;
    cout << "First: " << pArr << endl; 
    pArr++;
    cout << "Second: " << pArr << endl;

    string t;
    cin >> t;

    return 0;
}
// Functions
void changeValue(int* pVal) {
    *pVal = 18;
}
void doubleArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}