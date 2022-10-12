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

template <typename TX>
void times2(TX val) {
    cout << val << " * 2 = " << val * 2 << endl;
}

template <typename TY>
TY add(TY val, TY val2) {
    return val + val2;
}

template <typename TZ>
TZ maxi(TZ val, TZ val2) {
    return (val < val2) ? val2 : val;
}

int main() {
    times2(3);
    times2(7.32);

    cout << "5 + 5 = " << add(5, 5) << endl;
    cout << "5.3 + 5.2 = " << add(5.3, 5.2) << endl;

    cout << "Max 4 or 8 = " << maxi(4, 8) << endl;
    cout << "Max A or B = " << maxi('A', 'B') << endl;
    cout << "Max Dog or Cat = " << maxi("Dog", "Cat") << endl;

    return 0;
}