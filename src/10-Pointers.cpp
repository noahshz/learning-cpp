#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <ctime>
#include <limits>

using namespace std;

// Prototypes
void changeValue(int* pVar);

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


    string t;
    cin >> t;

    return 0;
}
// Functions
void changeValue(int* pVal) {
    *pVal = 18;
}
