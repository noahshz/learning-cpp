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

using namespace std;

void awaitInput();

int main() {
    // deque
    deque<int> d = { 1, 2, 3, 4 };
    d.push_front(0);
    d.push_back(5);
    for(unsigned int i : d) cout << i << endl;

    awaitInput();
}

void awaitInput() {
    string input;
    cin >> input;
}