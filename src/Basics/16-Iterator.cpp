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

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    // itr
    vector<int>::iterator itr;
    for(itr = nums.begin(); itr < nums.end(); itr++) {
        cout << *itr << endl;
    }

    // itr 2
    vector<int>::iterator itr2 = nums.begin();
    advance(itr2, 2);
    cout << *itr2 << endl;

    // get next itr
    auto itr3 = next(itr2, 1);
    cout << *itr3 << endl;

    // get previus itr
    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;

    // combine vectors
    vector<int> part1 = {1, 4, 5, 6};
    vector<int> part2 = {2, 3};
    auto itr5 = part1.begin();
    advance(itr5, 1);
    copy(part2.begin(), part2.end(), inserter(part1, itr5));
    for(unsigned int i : part1) {
        cout << i << endl;
    }
}