#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Hello World!" << endl;

    short int ix = 1;
    int iz  = 2147483641;
    long long int iy = 9223372036854775801;

    cout << numeric_limits<int>::max() << endl;

    string t;
    cin >> t;
    return 0;
}